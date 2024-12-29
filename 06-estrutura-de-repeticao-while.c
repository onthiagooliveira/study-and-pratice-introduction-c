#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Exercício 01: Desenvolva um programa que leia uma sequência de números inteiros terminada em zero e mostre cada número lido (exceto o zero). 
//    int num;
//    printf ("Digite um número: ");
//    scanf("%d",&num);
//    while (num!=0)
//    {
//        printf ("O número lido foi = %d\n\n ",num);
//        printf ("Digite um número: \n");
//        scanf("%d",&num);
//    }


    // Exercício 02: Desenvolva um programa que leia os 15 números positivos e mostre o maior destes números.
    // int nmb;
    // int maior_num;
    // int contador;

    // printf ("Digite o primeiro número: \n");
    // scanf(" %d",&nmb);
    // contador = 1;

    // while (nmb > 0 && contador <15) {
    //     printf("Número positivo: %d\n", nmb);
    //     printf("Digite o próximo número positivo: \n");
    //     scanf(" %d", &nmb);

    //     // Verificando o maior número informado
    //     if(nmb > maior_num) {
    //         maior_num = nmb;
    //     }
    //     contador++;
    // }
    // printf("O maior número digitado foi: %d\n\n", maior_num);

    /** 
     * ? do...while
     * Exercício 03: Desenvolva um programa que leia uma sequência de números inteiros terminada em zero e mostre cada número lido (exceto o zero).
    */

   int num;

   do
   {
    /* code */
    printf ("Digite um número: ");
    scanf("%d",&num);
    printf ("O número lido foi:  %d\n",num);
   } while (num!=0); 

   return 0;
}
