#include <stdio.h>

int main () {

    int vetor[5] = {10, 20, 30, 40, 50};
    float div = 0;
    int i;

    for(i = 0; i < 5; i++) {
        div += vetor[i];
    }
    printf("O resultado: %.2f", div / 5);
    return 0;
}