#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho;
    int *p;

    printf ("Insira o tamanho do vetor: ");
    scanf("%d",&tamanho);

    p = (int *) malloc(tamanho*sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor da posição %d: ",i);
        scanf("%d",&p[i]);
    }

    printf("Impressão dos valores do vetor: \n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d \n",p[i]);
    }

    return 0;
    
}