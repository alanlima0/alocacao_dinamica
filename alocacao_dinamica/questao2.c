#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[50];
    float notas[3];
} aluno;

int main(){

    printf("Tamanho em bytes da struct aluno: %zu bytes\n", sizeof(aluno));

    return 0;
}