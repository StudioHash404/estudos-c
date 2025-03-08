#include <stdio.h>

int main () {

    float num1, num2, resultado;
    char op;
    
    printf("Digite seu numero:\n ");
    scanf("%f", &num1);
    
    printf("Digite o operador: +, -, *, / \n: ");
    scanf(" %c", &op);
    
    printf("Digite seu segundo numero:\n ");
    scanf("%f", &num2);
    
    switch(op) {
    case '+' :
        resultado = num1 + num2;
        printf("seu numero %2.f + %2.f e igual a %2.f\n", num1, num2, resultado);
        break;
    case '-' :
        resultado = num1 - num2;
        printf("seu numero %2.f - %2.f e igual a %2.f\n", num1, num2, resultado);
        break;
    case '*' :
        resultado = num1 * num2;
        printf("seu numero %2.f x %2.f e igual a %2.f\n", num1, num2, resultado);
        break;
    case '/' :
        resultado = num1 / num2;
        printf("seu numero %2.f / %2.f e igual a %2.f\n", num1, num2, resultado);
        break;    
    default :
    printf("operacao invalida");
    return 1;
    }
    return 0;
    //código ruim, os excesso de printf
}