#include<stdio.h>

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    float divisao = 0;
    int i;

    for(i = 0; i < 5; i++) {
        divisao += vetor[i];
    }
    printf("resultado: %2.f", divisao / 5);

    return 0;
}