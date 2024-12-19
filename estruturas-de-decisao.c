#include <stdio.h>

int main () {
    // Declarando as variáveis que serão utilziadas
    int cadastrar_conta = 0;
    int conta_autenticada = 0;
    int conta_logada = 0;

    // Realiza uma interação com o usuário exibindo mensagens e coletando entradas do teclado 
    printf("Deseja cadastrar uma conta? \n0 para Não, 1 Para Sim \n");
    scanf("%d", &cadastrar_conta);

    printf("\nDeseja autenticar sua conta? \n0 para Não, 1 Para Sim \n");
    scanf("%d", &conta_autenticada);

    printf("\nDeseja logar em sua conta? \n0 para Não, 1 Para Sim \n");
    scanf("%d", &conta_logada);
    
    // Bloco de decisão que processa as entradas do usuáio e verifica qual caminho será trilhado
    if (cadastrar_conta && conta_autenticada && conta_logada > 0) {
        printf("\nBem vindo ao seu Dashboard\n.");
    } else {
        printf("Houve um erro inesperado, verifique seu acesso.");
    }
}