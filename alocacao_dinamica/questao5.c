#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vetor;

    do
    {
        printf("Insira um valor positivo para N: ");
        scanf("%d",&n);
    } while (n < 0);
    
    vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        do {
            printf("Insira o valor para a posição %d (>= 2): ", i);
            scanf("%d", &vetor[i]);

            if (vetor[i] < 2) {
                printf("Valor inválido! Deve ser >= 2.\n");
            }

        } while (vetor[i] < 2);
    }

    printf("Valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    
    return 0;
}