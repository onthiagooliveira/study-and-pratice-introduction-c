#include <stdio.h>

int main() {
    //
    /** Estruturas de repetição
     *
     * ? Estrutura de repetição com variável contadora com número previsto de repetições:
     *  
     * * Exercício:ler 3 notas de um aluno, calcular e exibir a média aritmética dessas notas, 
     * exibir se o aluno foi aprovado ou não (média igual ou acima de 7 aprova o aluno). 
    */

    double score, score_final;

    for (int i = 1; i < 4; i++){
        printf("Nota avaliação: %d\n", i);
        scanf("%lf", &score);
        score_final += score;
    }
    score_final /= 3;

    if ( score_final >= 7 ) {
        printf("\nAluno aprovado\n");
        printf("Média: %.1lf\n", score_final);  
    } else {
         printf("Aluno reprovado: %.1lf\n", score_final);
    }


    // Exercício 2: Desenvolva um programa que leia um número e o mostre 20 vezes

    int exibirNum;
    printf("\nDigite um número: \n");
    scanf("%d", &exibirNum);

    for (int i = 0; i < 20; i++) {
        printf("%d\n", exibirNum);
    }

    //  Exercício 3: Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles. 
    
    int entrada_numero;
    int maior_numero = 0;

    for (int i = 0; i < 15; i++) {
        printf("insira um número: \n");
        scanf(" %d", &entrada_numero);
        
        if (entrada_numero > maior_numero) {
            maior_numero = entrada_numero;
        }
    }
    printf("O maior número inserido foi: %d\n", maior_numero);

    /**
     * * Exercício 3:
     * Desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de
     * uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo 
     * salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o 
     * maior salário reajustado da empresa deve ser apresentado na tela. 
     */

    float salary_increase_percentage;
    double employee_salary;
    double highest_salary;

    printf("Informe a porcentagem de reajuste salarial à ser aplicada: \n");
    scanf("%f", &salary_increase_percentage);

    for(int i = 1; i < 5; i++) {
        printf("\nInforme o salário do funcionário %d: \n", i);
        scanf(" %lf", &employee_salary);

        /** Operação para calcular o valor do aumento salarial:
         * Dividimos o input(porcentagem de aumento) por 100, tornando-o uma fração decimal, então o multiplicamos pelo salário do
         * funcionário, obtendo o valor que será acrescido.
        */
        employee_salary = employee_salary + (salary_increase_percentage / 100 * employee_salary); 
        printf("Salário reajustado: %.2f\n", employee_salary);

        if (employee_salary > highest_salary) {
            highest_salary = employee_salary;            
        }
    }

    printf("\nMaior salário reajustado: %.2lf\n", highest_salary);   
    return 0;
    
}