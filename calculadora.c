#include <stdio.h>

int main() {

    int num1, num2;  
    char operacao;
    int resultado;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    
    printf("Escolha a operação: +, -, *, / ");
    scanf(" %c", &operacao);
    
    printf("Digite seu segundo numero: ");
    scanf("%d", &num2);
    
    switch(operacao) {
        case '+' :
            resultado = num1 + num2;
            break;
        case '-' :
            resultado = num1 - num2;
            break;
        case '*' :
            resultado = num1 * num2;
            break;
        case '/' :
            resultado = num1 / num2;
            break;
    }
    
    printf("resultado: %d\n", resultado);
    
    return 0;
}