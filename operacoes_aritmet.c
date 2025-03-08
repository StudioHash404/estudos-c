#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    //operadores aritméticas
    int v1,v2,soma, sub, mult, di, numero, resto;
    
    printf("Digite um valor inteiro: ");
    scanf("%d",&v1);
    
    printf("Digite outro valor inteiro: ");
    scanf("%d",&v2);
    
    soma = v1 + v2;
    sub = v1 - v2;
    mult = v1 * v2;
    di = v1 / v2;
    
    //print de operaçao aritmética
    printf("Valor da soma: %d + %d = %d\n",v1,v2,soma);
    printf("Valor da subtracao: %d - %d = %d\n",v1,v2,sub);
    printf("Valor da multiplicacao: %d * %d = %d\n",v1,v2,mult);
    printf("Valor da divisao: %d / %d = %d\n",v1,v2,di);
    
    
    printf("Digite um valor inteiro: \n");
    scanf("%d",&numero);
    
    resto = numero % 2;
    
    printf("Resto da divisao: %d\n",resto);
    
    //if e else
    //comparando se o valor é zero
    //caso seja verdadeiro ele executa isso aqui↓
    if(resto == 0)
    {
        printf("Numero par!\n");
    }
    //else éo falso,significa que não é par
    else
        {
            printf("Numero impar\n");
        }
    
    return 0;
}