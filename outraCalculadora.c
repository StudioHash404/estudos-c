#include <stdio.h>

int main () {

    float valor1, valor2, resultado;
    char operacao;

    printf("Digite seu número: \n");
    scanf("%f", &valor1);

    printf("Escolha sua operação: +, -, *, / \n");
    scanf(" %c", &operacao);

    printf("Digite seu segundo número: \n");
    scanf("%f", &valor2);

    switch (operacao) {
    case '+' :
        resultado = valor1 + valor2;
        break;
    case '-' :
        resultado = valor1 - valor2;
        break;
    case '*' :
        resultado = valor1 * valor2;
        break;
    case '/' :
        resultado = valor1 / valor2;
        break;
    default:
        printf("Operação inválida!");
        break;
    }
    
    printf("O valor do seu resultado é: %2.f", resultado);
    
    return 0;
}
