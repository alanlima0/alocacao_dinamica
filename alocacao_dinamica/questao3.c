#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    char nome[50];
    char endereco[50];
} cadastro;

// Função para alocar dinamicamente um vetor de tamanho N e preencher os dados
cadastro* criarCadastro(int N) {

    cadastro* vetor = (cadastro*)malloc(N * sizeof(cadastro));
    if (vetor == NULL) {
        printf("Erro: memória insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Digite os dados do cadastro %d:\n", i + 1);
        printf("idade: ");
        scanf("%d", &vetor[i].idade);
        printf("Nome: ");
        getchar();
        fgets(vetor[i].nome, 50, stdin);
        getchar();
        printf("Endereço: ");
        fgets(vetor[i].endereco, 50, stdin);

        printf("\n");
    }

    return vetor;
}

int main() {
    int N;
    printf("Digite o número de cadastros: ");
    scanf("%d", &N);

    cadastro* vetorCadastro = criarCadastro(N);

    // Exibe os dados dos cadastros para verificar
    printf("\nDados dos cadastros:\n");
    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("ID: %d\n", vetorCadastro[i].idade);
        printf("Nome: %s\n", vetorCadastro[i].nome);
        printf("Salário: %s\n", vetorCadastro[i].endereco);
        printf("\n");
    }

    free(vetorCadastro);

    return 0;
}
