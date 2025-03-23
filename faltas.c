#include <stdio.h>

int main () {

    int dias;
    int faltas;

    printf("Digite os dias que o aluno faltou: \n");
    scanf("%d", &dias);

    faltas = dias * 9;

    printf("As faltas do aluno são: %d\n", faltas);
    if(faltas > 20) {
        printf("O aluno está faltando muito!\n");
    }

    return 0;
}