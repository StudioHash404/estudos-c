#include <stdio.h>

int main () {

    char aluno [100];
    char email [100];
    int op;

    printf("Digite 1 para casdastrar um aluno: \n");
    scanf("%d", &op);
    if(op != 1) {
        printf("Operacão inválida");
        return 1;
    }

    switch(op) {
    case 1:
        printf("Deseja cadastrar o aluno?: 1=sim, 2=não: \n");
        scanf("%d", &op);
        if (op == 1) {
            printf("Digite o nome do aluno: \n");
            scanf("%s", aluno);

            printf("Digite o email do aluno: \n");
            scanf("%s", email);

            printf("Aluno cadastrado com sucesso: \n");
            printf("Nome do aluno: %s, email do aluno: %s\n", aluno, email);
            break;
        }
    case 2:
        printf("Você escolheu 2! Aluno não cadastrado.");
        return 1;
        break;
    }
    return 0;
}
//código ruim, lagado e cheio de falhas.