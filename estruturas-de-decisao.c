#include <stdio.h>
#include <ctype.h>

int main()
{
    // Declarando as variáveis que serão utilziadas
    int cadastrar_conta = 0;
    int conta_ativada = 0;
    int conta_logada = 0;
    char opcao;

    // Realiza uma interação com o usuário exibindo mensagens e coletando entradas do teclado
    printf("Deseja criar uma conta ? S/N\n");
    scanf(" %c", &opcao);
    opcao = toupper(opcao);

    if (opcao == 'S') {
        cadastrar_conta = 1;
    }

    printf("Deseja ativar sua conta ? S/N\n");
    scanf(" %c", &opcao);
    opcao = toupper(opcao);

    if (opcao == 'S'){
        conta_ativada = 1;
    }

    printf("Deseja logar em sua  conta ? S/N\n");
    scanf(" %c", &opcao);
    opcao = toupper(opcao);

    if (opcao == 'S'){
        conta_logada = 1;
    }

    // Bloco de decisão que processa as entradas do usuáio e verifica qual caminho será trilhado
    if (cadastrar_conta && conta_ativada && conta_logada) {
        printf("\nBem vindo ao seu Dashboard\n.");
    } else {
        printf("Houve um erro inesperado, verifique seu acesso.");
    }
}