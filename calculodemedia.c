#include<stdio.h>

int main(void)
{
    float n1, n2, media;
    
    printf("Digite a nota do aluno: ");
    scanf("%f",&n1);
    
    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&n2);
    
    
    media = (n1 + n2 ) /2;
    
    printf("Media = %.1f",media);
    
    return 0;
}