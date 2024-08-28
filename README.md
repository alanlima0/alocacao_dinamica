# Questões sobre Alocação Dinâmica em C

Este repositório contém exercícios e exemplos práticos relacionados à alocação dinâmica de memória em linguagem C. Os exemplos cobrem desde conceitos básicos de alocação até o uso de ponteiros e funções de manipulação de memória como `malloc`, `calloc`, `realloc` e `free`.

## Conteúdo

1. **Introdução à Alocação Dinâmica**
   - Conceitos básicos sobre alocação de memória em tempo de execução.
   - Uso das funções `malloc` e `free`.

2. **Vetores Dinâmicos**
   - Como alocar e manipular vetores de tamanho variável.
   - Exemplo prático: Criação de um vetor de inteiros com tamanho definido pelo usuário.

3. **Gerenciamento de Memória**
   - Boas práticas para evitar vazamentos de memória.
   - Uso correto das funções `free` para liberar memória alocada dinamicamente.

4. **Questões Práticas**
   - Exercícios de fixação que envolvem a implementação de algoritmos utilizando alocação dinâmica.
   - Exemplos de questões:
     - Criar um vetor dinâmico onde cada elemento deve ser maior ou igual a 2.
     - Implementar uma função que redimensiona um vetor à medida que novos elementos são adicionados.
     - Construir uma matriz 2D dinâmica e realizar operações básicas como soma de linhas e colunas.

## Como Usar

Cada questão ou exemplo está em um arquivo `.c` separado. Para compilar e executar os programas, siga os passos abaixo:

1. **Compile o arquivo C**:
   ```bash
   gcc -o nome_do_programa nome_do_arquivo.c
