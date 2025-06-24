#include "fila_prioridade.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N_PROD 80
#define N_CONS 75
#define N_REPR 2

#define PRIORIDADE 100

int id_global = -1;
pthread_mutex_t id_mutex = PTHREAD_MUTEX_INITIALIZER;

int gera_id(){
    pthread_mutex_lock(&id_mutex);
    id_global++;
    pthread_mutex_unlock(&id_mutex);

    return id_global;
}

void* produtor(void* arg) {
    unsigned int seed = time(NULL) ^ (unsigned int) pthread_self();

    Pedido p;
    p.id_dispositivo = gera_id();
    p.timestamp = time(NULL);
    p.prioridade =  rand_r(&seed) % PRIORIDADE ;

    inserir(p);
    printf("[PRODUTOR] Inserido: ID=%d, PRIORIDADE=%d\n", p.id_dispositivo, p.prioridade);
    sleep(1);
  
  return NULL;
}

void* consumidor(void* arg) {
    Pedido p = remover();
    if (p.id_dispositivo != -1) {
        printf("[CONSUMIDOR] Removido: ID=%d, PRIORIDADE=%d\n", p.id_dispositivo, p.prioridade);
    }
    sleep(2);

    return NULL;
}

void* atualizador(void* arg) {
    unsigned int seed = time(NULL) ^ (unsigned int) pthread_self();

    int id =  rand_r(&seed) % N_PROD;
    int nova_prioridade =  rand_r(&seed) % PRIORIDADE;
    int repr = repriorizar(id, nova_prioridade);
    if (repr) {
        printf("[REPRIORIZADOR] Repriorizado: ID=%d para PRIORIDADE=%d\n", id, nova_prioridade);
    } else {
        printf("[REPRIORIZADOR] NENHUM encontrado para ID=%d\n", id);
    }
    sleep(1);
    
    return NULL;
  
}

int main() {
    pthread_t prod[N_PROD], cons[N_CONS], repr[N_REPR];
    inicializar_fila();

    for (int i = 0; i < N_PROD; i++)
        pthread_create(&prod[i], NULL, produtor, NULL);
    for (int i = 0; i < N_CONS; i++)
        pthread_create(&cons[i], NULL, consumidor, NULL);
    for (int i = 0; i < N_REPR; i++)
        pthread_create(&repr[i], NULL, atualizador, NULL);

    for (int i = 0; i < N_PROD; i++)
        pthread_join(prod[i], NULL);
    for (int i = 0; i < N_CONS; i++)
        pthread_join(cons[i], NULL);
    for (int i = 0; i < N_REPR; i++)
        pthread_join(repr[i], NULL);

    return 0;
}