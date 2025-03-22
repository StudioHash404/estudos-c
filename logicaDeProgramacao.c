#include<stdio.h>

int main()
{
    float nota;
    
    printf("Digite sua nota: \n");
    scanf("%f", &nota);
    
    if (nota >= 4.0 && nota < 7.0) {
    printf("Voce tem direito ao exame!\n");
    } else if (nota >= 7.0) {
    printf("Você foi aprovado!\n");
    } else{
    printf("Voce foi reprovado!\n");
    }
    return 0;
}
