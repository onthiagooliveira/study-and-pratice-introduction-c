#include <stdio.h>

int main () {

    printf("Menu:\n");
    printf("1 - Inserir um cliente\n");
    printf("2 - Consultar cliente por CPF\n");
    printf("3 - Consultar cliente por ID\n");
    printf("4 - Remover cliente\n");

    int option;
    scanf("%d", &option);
    
    // Estrutura de escolha switch case
    switch( option ){
    case 1: printf("1 | Inserir um cliente\n Digite o Nome do cliente\n");
    break;
    case 2: printf("2 | Consultar cliente por CPF\n Digite o CPF do cliente\n");
    break;
    case 3: printf("3 | Consultar cliente por ID\n Digite o ID do cliente\n");
    break;
    case 4: printf("4 | Remover cliente\n Informe o ID para remover\n");
    break;


    default: printf("Desconectando-se do sistema...");
    }

        return 0;
}