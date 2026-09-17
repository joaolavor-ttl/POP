# Entrada do codigo

## ENTRADA

* **int P;** //indica o tamanho da população da cidade para defender os meloes

//Na sequencia, segue os ataques dos goblins:

* **int F;** //indica a força da horda(quantos humanos sao necessarios para impedi-la)
* **int M;** //quantidade de meloes que a horda consegue roubar se não for impedida.
* **int G;** //quantidade de goblins que serao resgatados, caso a horda nao seja impedida.

### CPP
```cpp
//a entrada acaba com o ataque:
0, 0, 0.//que nao deve ser processado.
```

### SAIDA

> **Para cada ataque, o programa deve imprimir uma linha com a informação de quantos meloes (X)foram roubados e quantos goblins (Y) resgatados ATE O MOMENTO, seguindo o formato:

```cpp
Meloes roubados: X
Goblins resgatados: Y
---
```
## Logica

```cpp
// 1. Le o P inicial

// 2. Cria as variaveis
 int total_meloes = 0 e  int total_goblins = 0
// 3. Loop infinito ou loop de leitura (while):
//    - Le F, M, G
//    - Verifica se e 0 0 0 para dar break
//    - Se P < F: atualiza os totais
//    - Imprime Meloes roubados, Goblins resgatados e a linha 
```


