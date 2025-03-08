#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //declaração de variáveis
    int variavel1 = 10; //valor para variavel inteira
    float variavel2 = 6.79; //float é uma variavel que possui casas decimais
    char letra = 'a'; //variavel do tipo letra
    char frase[10] = "Nathan"; //[10]=definiar quantidade de caracteres ou letras
    double quantidade_maior = 1.234567; //possui 15 digitos de precisao, float é metade
    
    int valor1, valor2, soma;
        
    //execução das variáveis    
    printf("Hello world!\n");
    printf("Exibindo o numero inteiro %d\n",variavel1); //%d significa que vai aparecer um valor inteiro decimal
    printf("Exibir um numero real %f\n",variavel2); //%f é o float
    printf("Exibir variavel de letra %c\n",letra);
    printf("Exibir frase %s\n",frase); //utiliza S para dizer que é uma string longa
    //C=1 S=mais que 1
    printf("exibir quantidade maior de casas decimais %f\n",quantidade_maior); //tambem se usa F
    printf("Vários valores: %d %f %c %s %f\n",variavel1,variavel2,letra,frase,quantidade_maior); 
    //%d de inteiro, %f de float, %c de letra, %s de frase longa, %f para double
    //deve-se colocar tudo na sequência correta
    
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1); //& significa o endereço da variável
    
    printf("Digite outro numero inteiro: ");
    scanf("%d",&valor2);
    
    soma = valor1 + valor2;
    
    printf("Valor da soma de: %d + %d = %d\n",valor1,valor2,soma);
    
    system("pause"); //somente para janelas... Linux é melhor
    return 0;
}