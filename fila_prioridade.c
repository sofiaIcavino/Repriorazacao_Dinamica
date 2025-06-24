#include "fila_prioridade.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 100

static Pedido fila[TAM_MAX];
static int tamanho = 0;
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void inicializar_fila() {
    pthread_mutex_lock(&mutex);
    tamanho = 0;
    pthread_mutex_unlock(&mutex);
}

void inserir(Pedido p) {
    pthread_mutex_lock(&mutex);

    if (tamanho < TAM_MAX) {
        int i = tamanho;
        while (i > 0 && fila[i - 1].prioridade < p.prioridade) {
            fila[i] = fila[i - 1];
            i--;
        }
        fila[i] = p;
        tamanho++;
    }

    pthread_mutex_unlock(&mutex);
}

Pedido remover() {
    pthread_mutex_lock(&mutex);

    Pedido resultado = {-1, 0, -1};
    if (tamanho > 0) {
        resultado = fila[0];
        for (int i = 1; i < tamanho; i++) {
            fila[i - 1] = fila[i];
        }
        tamanho--;
    }

    pthread_mutex_unlock(&mutex);
    return resultado;
}

int repriorizar(int id_dispositivo, int nova_prioridade) {
    pthread_mutex_lock(&mutex);

    int encontrado = 0;
    Pedido alvo;

    int i = 0;
    while(i < tamanho && !encontrado) {
        if (fila[i].id_dispositivo == id_dispositivo) {
            alvo = fila[i];

            for (int j = i; j < tamanho - 1; j++) {
                fila[j] = fila[j + 1];
            }
            encontrado = 1;
            tamanho--;
        }
        i++;
    }
    if (encontrado) {
        alvo.prioridade = nova_prioridade;
        pthread_mutex_unlock(&mutex);
        inserir(alvo);
        return encontrado;
    }
    pthread_mutex_unlock(&mutex);
    return encontrado;
}