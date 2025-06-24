
# RELATÓRIO: Fila de Prioridade com Repriorização Dinâmica

## 👨‍💻 Integrantes
* Sofia Pinho Icavino Moura - 22450153
* Giovani Artil Oliveira de Carvalho - 22401955



## 🧪 Casos de testes

## Relatório de Resultados

### 📌 Caso 1: Alta concorrência de inserção
    🚨 Observação - Caso de teste 1
        Número de threads:
        - Produtores: 80
        - Consumidores: 10
        - Repriorizadores: 10
- **Tempo de execução:** 0.001s
- **Itens inseridos:** 80
- **Itens removidos:** 10
- **Repriorizações realizadas:** 8
- **🔎 Observações:** Apenas dois id's gerados não foram encontrados pela thread repriorizadora, devido ao elevado número de inserções se tornou mais fácil a repriorização.

```
* Saída do Caso de teste 1:

    [PRODUTOR] Inserido: ID=1, PRIORIDADE=36
    [PRODUTOR] Inserido: ID=3, PRIORIDADE=44
    [PRODUTOR] Inserido: ID=2, PRIORIDADE=29
    [PRODUTOR] Inserido: ID=1, PRIORIDADE=21
    [PRODUTOR] Inserido: ID=4, PRIORIDADE=29
    [PRODUTOR] Inserido: ID=6, PRIORIDADE=36
    [PRODUTOR] Inserido: ID=8, PRIORIDADE=27
    [PRODUTOR] Inserido: ID=7, PRIORIDADE=12
    [PRODUTOR] Inserido: ID=9, PRIORIDADE=20
    [PRODUTOR] Inserido: ID=5, PRIORIDADE=20
    [PRODUTOR] Inserido: ID=10, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=11, PRIORIDADE=28
    [PRODUTOR] Inserido: ID=12, PRIORIDADE=20
    [PRODUTOR] Inserido: ID=13, PRIORIDADE=35
    [PRODUTOR] Inserido: ID=14, PRIORIDADE=28
    [PRODUTOR] Inserido: ID=15, PRIORIDADE=45
    [PRODUTOR] Inserido: ID=16, PRIORIDADE=35
    [PRODUTOR] Inserido: ID=17, PRIORIDADE=28
    [PRODUTOR] Inserido: ID=18, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=19, PRIORIDADE=11
    [PRODUTOR] Inserido: ID=20, PRIORIDADE=0
    [PRODUTOR] Inserido: ID=21, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=22, PRIORIDADE=9
    [PRODUTOR] Inserido: ID=23, PRIORIDADE=2
    [PRODUTOR] Inserido: ID=24, PRIORIDADE=45
    [PRODUTOR] Inserido: ID=26, PRIORIDADE=2
    [PRODUTOR] Inserido: ID=27, PRIORIDADE=43
    [PRODUTOR] Inserido: ID=29, PRIORIDADE=26
    [PRODUTOR] Inserido: ID=28, PRIORIDADE=35
    [PRODUTOR] Inserido: ID=25, PRIORIDADE=9
    [PRODUTOR] Inserido: ID=33, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=35, PRIORIDADE=0
    [PRODUTOR] Inserido: ID=31, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=36, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=34, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=37, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=38, PRIORIDADE=24
    [PRODUTOR] Inserido: ID=39, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=40, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=41, PRIORIDADE=0
    [PRODUTOR] Inserido: ID=43, PRIORIDADE=48
    [PRODUTOR] Inserido: ID=45, PRIORIDADE=31
    [PRODUTOR] Inserido: ID=30, PRIORIDADE=43
    [PRODUTOR] Inserido: ID=47, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=44, PRIORIDADE=14
    [PRODUTOR] Inserido: ID=32, PRIORIDADE=0
    [PRODUTOR] Inserido: ID=46, PRIORIDADE=24
    [PRODUTOR] Inserido: ID=42, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=48, PRIORIDADE=31
    [PRODUTOR] Inserido: ID=49, PRIORIDADE=48
    [PRODUTOR] Inserido: ID=50, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=51, PRIORIDADE=7
    [PRODUTOR] Inserido: ID=52, PRIORIDADE=22
    [PRODUTOR] Inserido: ID=53, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=54, PRIORIDADE=29
    [PRODUTOR] Inserido: ID=55, PRIORIDADE=13
    [PRODUTOR] Inserido: ID=56, PRIORIDADE=5
    [PRODUTOR] Inserido: ID=57, PRIORIDADE=22
    [PRODUTOR] Inserido: ID=58, PRIORIDADE=13
    [PRODUTOR] Inserido: ID=59, PRIORIDADE=5
    [PRODUTOR] Inserido: ID=60, PRIORIDADE=46
    [PRODUTOR] Inserido: ID=61, PRIORIDADE=48
    [PRODUTOR] Inserido: ID=62, PRIORIDADE=39
    [PRODUTOR] Inserido: ID=63, PRIORIDADE=28
    [PRODUTOR] Inserido: ID=64, PRIORIDADE=46
    [PRODUTOR] Inserido: ID=66, PRIORIDADE=30
    [PRODUTOR] Inserido: ID=68, PRIORIDADE=37
    [PRODUTOR] Inserido: ID=65, PRIORIDADE=13
    [PRODUTOR] Inserido: ID=70, PRIORIDADE=18
    [PRODUTOR] Inserido: ID=71, PRIORIDADE=37
    [PRODUTOR] Inserido: ID=69, PRIORIDADE=4
    [PRODUTOR] Inserido: ID=72, PRIORIDADE=30
    [PRODUTOR] Inserido: ID=67, PRIORIDADE=46
    [PRODUTOR] Inserido: ID=73, PRIORIDADE=44
    [PRODUTOR] Inserido: ID=74, PRIORIDADE=37
    [PRODUTOR] Inserido: ID=75, PRIORIDADE=12
    [PRODUTOR] Inserido: ID=76, PRIORIDADE=30
    [PRODUTOR] Inserido: ID=77, PRIORIDADE=45
    [PRODUTOR] Inserido: ID=78, PRIORIDADE=38
    [PRODUTOR] Inserido: ID=79, PRIORIDADE=3
    [CONSUMIDOR] Removido: ID=43, PRIORIDADE=48
    [CONSUMIDOR] Removido: ID=49, PRIORIDADE=48
    [CONSUMIDOR] Removido: ID=61, PRIORIDADE=48
    [CONSUMIDOR] Removido: ID=60, PRIORIDADE=46
    [CONSUMIDOR] Removido: ID=64, PRIORIDADE=46
    [CONSUMIDOR] Removido: ID=67, PRIORIDADE=46
    [CONSUMIDOR] Removido: ID=15, PRIORIDADE=45
    [CONSUMIDOR] Removido: ID=24, PRIORIDADE=45
    [CONSUMIDOR] Removido: ID=77, PRIORIDADE=45
    [CONSUMIDOR] Removido: ID=3, PRIORIDADE=44
    [REPRIORIZADOR] Repriorizado: ID=76 para PRIORIDADE=47
    [REPRIORIZADOR] Repriorizado: ID=17 para PRIORIDADE=45
    [REPRIORIZADOR] Repriorizado: ID=47 para PRIORIDADE=10
    [REPRIORIZADOR] NENHUM encontrado para ID=24
    [REPRIORIZADOR] Repriorizado: ID=4 para PRIORIDADE=9
    [REPRIORIZADOR] Repriorizado: ID=18 para
    PRIORIDADE=0
    [REPRIORIZADOR] Repriorizado: ID=69 para PRIORIDADE=15
    [REPRIORIZADOR] Repriorizado: ID=70 para PRIORIDADE=47
    [REPRIORIZADOR] Repriorizado: ID=10 para PRIORIDADE=38
    [REPRIORIZADOR] NENHUM encontrado para ID=77

```

### 📌 Caso 2: Alta frequência de repriorização
    🚨 Observação - Caso de teste 2
        Número de threads:
        - Produtores: 65
        - Consumidores: 15
        - Repriorizadores: 50
- **Tempo de execução:** 0.002s
- **Itens inseridos:** 65
- **Itens removidos:** 15
- **Repriorizações realizadas:** 39
- **🔎 Observações:** Apenas 22% das threads repriorizadoras não tiveram sucesso em repriorizar um elemento da fila.

```
* Saída do Caso de teste 2:

    [PRODUTOR] Inserido: ID=0, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=3, PRIORIDADE=6
    [PRODUTOR] Inserido: ID=2, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=1, PRIORIDADE=48
    [PRODUTOR] Inserido: ID=5, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=4, PRIORIDADE=1
    [PRODUTOR] Inserido: ID=8, PRIORIDADE=39
    [PRODUTOR] Inserido: ID=6, PRIORIDADE=8
    [PRODUTOR] Inserido: ID=7, PRIORIDADE=49
    [PRODUTOR] Inserido: ID=9, PRIORIDADE=45
    [PRODUTOR] Inserido: ID=10, PRIORIDADE=38
    [PRODUTOR] Inserido: ID=11, PRIORIDADE=4
    [PRODUTOR] Inserido: ID=12, PRIORIDADE=21
    [PRODUTOR] Inserido: ID=13, PRIORIDADE=38
    [PRODUTOR] Inserido: ID=14, PRIORIDADE=28
    [PRODUTOR] Inserido: ID=15, PRIORIDADE=45
    [PRODUTOR] Inserido: ID=16, PRIORIDADE=36
    [PRODUTOR] Inserido: ID=17, PRIORIDADE=29
    [PRODUTOR] Inserido: ID=18, PRIORIDADE=21
    [PRODUTOR] Inserido: ID=19, PRIORIDADE=12
    [PRODUTOR] Inserido: ID=20, PRIORIDADE=3
    [PRODUTOR] Inserido: ID=21, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=22, PRIORIDADE=12
    [PRODUTOR] Inserido: ID=23, PRIORIDADE=3
    [PRODUTOR] Inserido: ID=24, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=25, PRIORIDADE=12
    [PRODUTOR] Inserido: ID=27, PRIORIDADE=43
    [PRODUTOR] Inserido: ID=28, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=26, PRIORIDADE=27
    [PRODUTOR] Inserido: ID=29, PRIORIDADE=3
    [PRODUTOR] Inserido: ID=30, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=31, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=32, PRIORIDADE=27
    [PRODUTOR] Inserido: ID=33, PRIORIDADE=44
    [PRODUTOR] Inserido: ID=34, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=35, PRIORIDADE=1
    [PRODUTOR] Inserido: ID=36, PRIORIDADE=18
    [PRODUTOR] Inserido: ID=37, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=38, PRIORIDADE=27
    [PRODUTOR] Inserido: ID=39, PRIORIDADE=44
    [PRODUTOR] Inserido: ID=40, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=41, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=42, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=43, PRIORIDADE=48
    [PRODUTOR] Inserido: ID=44, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=46, PRIORIDADE=24
    [PRODUTOR] Inserido: ID=45, PRIORIDADE=8
    [PRODUTOR] Inserido: ID=48, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=49, PRIORIDADE=1
    [PRODUTOR] Inserido: ID=50, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=47, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=52, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=51, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=54, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=53, PRIORIDADE=39
    [PRODUTOR] Inserido: ID=55, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=57, PRIORIDADE=6
    [PRODUTOR] Inserido: ID=56, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=58, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=59, PRIORIDADE=13
    [PRODUTOR] Inserido: ID=60, PRIORIDADE=6
    [PRODUTOR] Inserido: ID=61, PRIORIDADE=25
    [PRODUTOR] Inserido: ID=62, PRIORIDADE=13
    [PRODUTOR] Inserido: ID=63, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=64, PRIORIDADE=21
    [CONSUMIDOR] Removido: ID=7, PRIORIDADE=49
    [CONSUMIDOR] Removido: ID=43, PRIORIDADE=48
    [CONSUMIDOR] Removido: ID=9, PRIORIDADE=45
    [CONSUMIDOR] Removido: ID=1, PRIORIDADE=48
    [CONSUMIDOR] Removido: ID=15, PRIORIDADE=45
    [CONSUMIDOR] Removido: ID=33, PRIORIDADE=44
    [CONSUMIDOR] Removido: ID=39, PRIORIDADE=44
    [CONSUMIDOR] Removido: ID=5, PRIORIDADE=41
    [CONSUMIDOR] Removido: ID=27, PRIORIDADE=43
    [CONSUMIDOR] Removido: ID=56, PRIORIDADE=41
    [CONSUMIDOR] Removido: ID=8, PRIORIDADE=39
    [CONSUMIDOR] Removido: ID=41, PRIORIDADE=41
    [CONSUMIDOR] Removido: ID=10, PRIORIDADE=38
    [REPRIORIZADOR] NENHUM encontrado para ID=15
    [REPRIORIZADOR] Repriorizado: ID=63 para PRIORIDADE=12
    [REPRIORIZADOR] NENHUM encontrado para ID=53
    [REPRIORIZADOR] NENHUM encontrado para ID=43
    [REPRIORIZADOR] Repriorizado: ID=48 para PRIORIDADE=26
    [REPRIORIZADOR] NENHUM encontrado para ID=56
    [REPRIORIZADOR] Repriorizado: ID=19 para PRIORIDADE=21
    [REPRIORIZADOR] Repriorizado: ID=4 para PRIORIDADE=14
    [REPRIORIZADOR] NENHUM encontrado para ID=7
    [REPRIORIZADOR] NENHUM encontrado para ID=27
    [REPRIORIZADOR] Repriorizado: ID=55 para PRIORIDADE=9
    [REPRIORIZADOR] Repriorizado: ID=3 para PRIORIDADE=31
    [REPRIORIZADOR] Repriorizado: ID=42 para PRIORIDADE=30
    [REPRIORIZADOR] NENHUM encontrado para ID=39
    [REPRIORIZADOR] Repriorizado: ID=30 para PRIORIDADE=49
    [REPRIORIZADOR] Repriorizado: ID=23 para
    PRIORIDADE=21
    [REPRIORIZADOR] NENHUM encontrado para ID=15
    [REPRIORIZADOR] Repriorizado: ID=14 para PRIORIDADE=44
    [REPRIORIZADOR] Repriorizado: ID=3 para PRIORIDADE=14
    [CONSUMIDOR] Removido: ID=53, PRIORIDADE=39
    [REPRIORIZADOR] Repriorizado: ID=58 para PRIORIDADE=35
    [REPRIORIZADOR] Repriorizado: ID=3 para PRIORIDADE=10
    [CONSUMIDOR] Removido: ID=13, PRIORIDADE=38
    [REPRIORIZADOR] Repriorizado: ID=38 para PRIORIDADE=28
    [REPRIORIZADOR] Repriorizado: ID=51 para PRIORIDADE=33
    [REPRIORIZADOR] Repriorizado: ID=37 para PRIORIDADE=17
    [REPRIORIZADOR] Repriorizado: ID=17 para PRIORIDADE=39
    [REPRIORIZADOR] Repriorizado: ID=22 para PRIORIDADE=38
    [REPRIORIZADOR] Repriorizado: ID=30 para PRIORIDADE=21
    [REPRIORIZADOR] NENHUM encontrado para ID=9
    [REPRIORIZADOR] Repriorizado: ID=42 para PRIORIDADE=30
    [REPRIORIZADOR] Repriorizado: ID=46 para PRIORIDADE=28
    [REPRIORIZADOR] Repriorizado: ID=17 para PRIORIDADE=10
    [REPRIORIZADOR] Repriorizado: ID=29 para PRIORIDADE=22
    [REPRIORIZADOR] Repriorizado: ID=0 para PRIORIDADE=5
    [REPRIORIZADOR] Repriorizado: ID=6 para PRIORIDADE=16
    [REPRIORIZADOR] Repriorizado: ID=38 para PRIORIDADE=45
    [REPRIORIZADOR] Repriorizado: ID=16 para PRIORIDADE=36
    [REPRIORIZADOR] Repriorizado: ID=49 para PRIORIDADE=0
    [REPRIORIZADOR] Repriorizado: ID=45 para PRIORIDADE=28
    [REPRIORIZADOR] Repriorizado: ID=25 para PRIORIDADE=14
    [REPRIORIZADOR] Repriorizado: ID=32 para PRIORIDADE=46
    [REPRIORIZADOR] Repriorizado: ID=17 para PRIORIDADE=43
    [REPRIORIZADOR] Repriorizado: ID=32 para PRIORIDADE=17
    [REPRIORIZADOR] Repriorizado: ID=3 para PRIORIDADE=5
    [REPRIORIZADOR] Repriorizado: ID=58 para PRIORIDADE=0
    [REPRIORIZADOR] Repriorizado: ID=37 para PRIORIDADE=45
    [REPRIORIZADOR] Repriorizado: ID=58 para PRIORIDADE=7
    [REPRIORIZADOR] NENHUM encontrado para ID=8
    [REPRIORIZADOR] Repriorizado: ID=19 para PRIORIDADE=12
    [REPRIORIZADOR] Repriorizado: ID=61 para PRIORIDADE=35
    [REPRIORIZADOR] NENHUM encontrado para ID=5

```

### 📌Caso 3: Consumo intenso
    🚨 Observação - Caso de teste 3
        Número de threads:
        - Produtores: 80
        - Consumidores: 75
        - Repriorizadores: 2
- **Tempo de execução:** 0.003s
- **Itens inseridos:** 80
- **Itens removidos:** 75
- **Repriorizações realizadas:** 0
- **🔎 Observações:** Por conta de haver poucos elementos na fila, haviam baixas chances de conseguir repriorizar um elemento a partir de um ID aleatório.

```
* Saída do Caso de teste 3:

    [PRODUTOR] Inserido: ID=0, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=4, PRIORIDADE=22
    [PRODUTOR] Inserido: ID=5, PRIORIDADE=31
    [PRODUTOR] Inserido: ID=2, PRIORIDADE=31
    [PRODUTOR] Inserido: ID=3, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=1, PRIORIDADE=24
    [PRODUTOR] Inserido: ID=6, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=7, PRIORIDADE=0
    [PRODUTOR] Inserido: ID=9, PRIORIDADE=48
    [PRODUTOR] Inserido: ID=10, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=8, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=11, PRIORIDADE=8
    [PRODUTOR] Inserido: ID=12, PRIORIDADE=25
    [PRODUTOR] Inserido: ID=13, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=15, PRIORIDADE=49
    [PRODUTOR] Inserido: ID=16, PRIORIDADE=39
    [PRODUTOR] Inserido: ID=14, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=17, PRIORIDADE=6
    [PRODUTOR] Inserido: ID=18, PRIORIDADE=49
    [PRODUTOR] Inserido: ID=19, PRIORIDADE=41
    [PRODUTOR] Inserido: ID=20, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=21, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=22, PRIORIDADE=39
    [PRODUTOR] Inserido: ID=23, PRIORIDADE=30
    [PRODUTOR] Inserido: ID=24, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=25, PRIORIDADE=15
    [PRODUTOR] Inserido: ID=27, PRIORIDADE=30
    [PRODUTOR] Inserido: ID=28, PRIORIDADE=38
    [PRODUTOR] Inserido: ID=29, PRIORIDADE=30
    [PRODUTOR] Inserido: ID=26, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=32, PRIORIDADE=6
    [PRODUTOR] Inserido: ID=33, PRIORIDADE=21
    [PRODUTOR] Inserido: ID=31, PRIORIDADE=14
    [PRODUTOR] Inserido: ID=35, PRIORIDADE=14
    [PRODUTOR] Inserido: ID=36, PRIORIDADE=47
    [PRODUTOR] Inserido: ID=38, PRIORIDADE=18
    [PRODUTOR] Inserido: ID=34, PRIORIDADE=4
    [PRODUTOR] Inserido: ID=39, PRIORIDADE=37
    [PRODUTOR] Inserido: ID=40, PRIORIDADE=2
    [PRODUTOR] Inserido: ID=41, PRIORIDADE=20
    [PRODUTOR] Inserido: ID=42, PRIORIDADE=11
    [PRODUTOR] Inserido: ID=43, PRIORIDADE=2
    [PRODUTOR] Inserido: ID=30, PRIORIDADE=21
    [PRODUTOR] Inserido: ID=44, PRIORIDADE=21
    [PRODUTOR] Inserido: ID=37, PRIORIDADE=12
    [PRODUTOR] Inserido: ID=45, PRIORIDADE=9
    [PRODUTOR] Inserido: ID=46, PRIORIDADE=4
    [PRODUTOR] Inserido: ID=47, PRIORIDADE=43
    [PRODUTOR] Inserido: ID=48, PRIORIDADE=11
    [PRODUTOR] Inserido: ID=49, PRIORIDADE=2
    [PRODUTOR] Inserido: ID=50, PRIORIDADE=43
    [PRODUTOR] Inserido: ID=51, PRIORIDADE=11
    [PRODUTOR] Inserido: ID=52, PRIORIDADE=26
    [PRODUTOR] Inserido: ID=53, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=54, PRIORIDADE=33
    [PRODUTOR] Inserido: ID=55, PRIORIDADE=26
    [PRODUTOR] Inserido: ID=56, PRIORIDADE=19
    [PRODUTOR] Inserido: ID=57, PRIORIDADE=9
    [PRODUTOR] Inserido: ID=58, PRIORIDADE=26
    [PRODUTOR] Inserido: ID=59, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=60, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=61, PRIORIDADE=24
    [PRODUTOR] Inserido: ID=62, PRIORIDADE=43
    [PRODUTOR] Inserido: ID=63, PRIORIDADE=10
    [PRODUTOR] Inserido: ID=64, PRIORIDADE=24
    [PRODUTOR] Inserido: ID=66, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=67, PRIORIDADE=26
    [PRODUTOR] Inserido: ID=65, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=69, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=70, PRIORIDADE=32
    [PRODUTOR] Inserido: ID=71, PRIORIDADE=25
    [PRODUTOR] Inserido: ID=68, PRIORIDADE=17
    [PRODUTOR] Inserido: ID=72, PRIORIDADE=18
    [PRODUTOR] Inserido: ID=73, PRIORIDADE=34
    [PRODUTOR] Inserido: ID=74, PRIORIDADE=25
    [PRODUTOR] Inserido: ID=76, PRIORIDADE=9
    [PRODUTOR] Inserido: ID=75, PRIORIDADE=16
    [PRODUTOR] Inserido: ID=77, PRIORIDADE=23
    [PRODUTOR] Inserido: ID=78, PRIORIDADE=42
    [PRODUTOR] Inserido: ID=79, PRIORIDADE=9
    [CONSUMIDOR] Removido: ID=15, PRIORIDADE=49
    [CONSUMIDOR] Removido: ID=18, PRIORIDADE=49
    [CONSUMIDOR] Removido: ID=9, PRIORIDADE=48
    [CONSUMIDOR] Removido: ID=36, PRIORIDADE=47
    [CONSUMIDOR] Removido: ID=47, PRIORIDADE=43
    [CONSUMIDOR] Removido: ID=50, PRIORIDADE=43
    [CONSUMIDOR] Removido: ID=62, PRIORIDADE=43
    [CONSUMIDOR] Removido: ID=78, PRIORIDADE=42
    [CONSUMIDOR] Removido: ID=3, PRIORIDADE=41
    [CONSUMIDOR] Removido: ID=10, PRIORIDADE=41
    [CONSUMIDOR] Removido: ID=19, PRIORIDADE=41
    [CONSUMIDOR] Removido: ID=16, PRIORIDADE=39
    [CONSUMIDOR] Removido: ID=22, PRIORIDADE=39
    [CONSUMIDOR] Removido: ID=28, PRIORIDADE=38
    [CONSUMIDOR] Removido: ID=39, PRIORIDADE=37
    [CONSUMIDOR] Removido: ID=6, PRIORIDADE=34
    [CONSUMIDOR] Removido: ID=69, PRIORIDADE=34
    [CONSUMIDOR] Removido: ID=73, PRIORIDADE=34
    [CONSUMIDOR] Removido: ID=54, PRIORIDADE=33
    [CONSUMIDOR] Removido: ID=14, PRIORIDADE=32
    [CONSUMIDOR] Removido: ID=20, PRIORIDADE=32
    [CONSUMIDOR] Removido: ID=66, PRIORIDADE=32
    [CONSUMIDOR] Removido: ID=70, PRIORIDADE=32
    [CONSUMIDOR] Removido: ID=2, PRIORIDADE=31
    [CONSUMIDOR] Removido: ID=5, PRIORIDADE=31
    [CONSUMIDOR] Removido: ID=23, PRIORIDADE=30
    [CONSUMIDOR] Removido: ID=27, PRIORIDADE=30
    [CONSUMIDOR] Removido: ID=29, PRIORIDADE=30
    [CONSUMIDOR] Removido: ID=52, PRIORIDADE=26
    [CONSUMIDOR] Removido: ID=55, PRIORIDADE=26
    [CONSUMIDOR] Removido: ID=58, PRIORIDADE=26
    [CONSUMIDOR] Removido: ID=67, PRIORIDADE=26
    [CONSUMIDOR] Removido: ID=12, PRIORIDADE=25
    [CONSUMIDOR] Removido: ID=71, PRIORIDADE=25
    [CONSUMIDOR] Removido: ID=74, PRIORIDADE=25
    [CONSUMIDOR] Removido: ID=1, PRIORIDADE=24
    [CONSUMIDOR] Removido: ID=61, PRIORIDADE=24
    [CONSUMIDOR] Removido: ID=64, PRIORIDADE=24
    [CONSUMIDOR] Removido: ID=21, PRIORIDADE=23
    [CONSUMIDOR] Removido: ID=4, PRIORIDADE=22
    [CONSUMIDOR] Removido: ID=33, PRIORIDADE=21
    [CONSUMIDOR] Removido: ID=44, PRIORIDADE=21
    [CONSUMIDOR] Removido: ID=24, PRIORIDADE=23
    [CONSUMIDOR] Removido: ID=30, PRIORIDADE=21
    [CONSUMIDOR] Removido: ID=38, PRIORIDADE=18
    [CONSUMIDOR] Removido: ID=26, PRIORIDADE=23
    [CONSUMIDOR] Removido: ID=77, PRIORIDADE=23
    [CONSUMIDOR] Removido: ID=41, PRIORIDADE=20
    [CONSUMIDOR] Removido: ID=72, PRIORIDADE=18
    [CONSUMIDOR] Removido: ID=53, PRIORIDADE=19
    [CONSUMIDOR] Removido: ID=56, PRIORIDADE=19
    [CONSUMIDOR] Removido: ID=59, PRIORIDADE=17
    [CONSUMIDOR] Removido: ID=65, PRIORIDADE=17
    [CONSUMIDOR] Removido: ID=68, PRIORIDADE=17
    [CONSUMIDOR] Removido: ID=75, PRIORIDADE=16
    [CONSUMIDOR] Removido: ID=0, PRIORIDADE=15
    [CONSUMIDOR] Removido: ID=8, PRIORIDADE=15
    [CONSUMIDOR] Removido: ID=13, PRIORIDADE=15
    [CONSUMIDOR] Removido: ID=25, PRIORIDADE=15
    [CONSUMIDOR] Removido: ID=31, PRIORIDADE=14
    [CONSUMIDOR] Removido: ID=35, PRIORIDADE=14
    [CONSUMIDOR] Removido: ID=37, PRIORIDADE=12
    [CONSUMIDOR] Removido: ID=48, PRIORIDADE=11
    [CONSUMIDOR] Removido: ID=42, PRIORIDADE=11
    [CONSUMIDOR] Removido: ID=51, PRIORIDADE=11
    [CONSUMIDOR] Removido: ID=60, PRIORIDADE=10
    [CONSUMIDOR] Removido: ID=63, PRIORIDADE=10
    [CONSUMIDOR] Removido: ID=45, PRIORIDADE=9
    [CONSUMIDOR] Removido: ID=57, PRIORIDADE=9
    [CONSUMIDOR] Removido: ID=76, PRIORIDADE=9
    [CONSUMIDOR] Removido: ID=79, PRIORIDADE=9
    [CONSUMIDOR] Removido: ID=11, PRIORIDADE=8
    [CONSUMIDOR] Removido: ID=17, PRIORIDADE=6
    [CONSUMIDOR] Removido: ID=32, PRIORIDADE=6
    [CONSUMIDOR] Removido: ID=34, PRIORIDADE=4
    [REPRIORIZADOR] NENHUM encontrado para ID=13
    [REPRIORIZADOR] NENHUM encontrado para ID=2

```

## 🧠 Observações Finais
- Foi gerado id's únicos (ou controlados) para a variável id_dispositivo no arquivo main.c, mantendo um contador global e garantindo, a partir do uso do mutex, IDs diferentes para cada novo Pedido.
- Foi gerado aleatoriamente o id do repriorizador a partir do número de threads do produtor, garantido que o valor do id exista.
