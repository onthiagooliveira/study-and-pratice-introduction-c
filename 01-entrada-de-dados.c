#include <stdio.h>

int main () {
    /** Há momentos em que precisamos coletar informações do cliente lendo os dados informados pelo
     * usuário. Para isso, utilizam-se comandos de entrada, permitindo a leitura formatada, principalmente
     * a partir do teclado.
     * 
     * Função scanf():
     * Essa função permite que o valor informado pelo usuário seja armazenado em uma variável e, posteriormente
     * seja usado para diversos cálculos.
     * 
     * Para invocar essa função, basta passar dois parâmetros entre os parêntetes: 
     *      
     *      scanf("parametro", &parametro2);
     *      Parâmetro : É composto pela string que traz o formato de leitura, %d, %f ou %c
     *      Parâmetro2: Variável que armazena o valor recebido, sendo o nome dessa variável precedido de &
     *      
     *      ! Não confunda & (comercial, aqui significa endereço de), com o operador lógico &;&;
     *      ! Não inclua o caractere especial '\n' na string parâmetro da função scanf();
     *       todas as variáveis dos tipos char, int, float e double devem ser precedidas de &.
     * 
    */

    int age;
    printf("Informe sua idade: \n");
    scanf("%d", &age);
    printf("Sua idade é: %d\n", age);  

    // A função scanf() também pode ler mais de uma variável simultânemaente.
    float dividendo, divisor;
    printf("Informe dois números reais\n");
    scanf("%f %f", &dividendo, &divisor);
    printf("A divisão de %.2f por %.2f é = %.2f\n", dividendo, divisor, dividendo/divisor);

    /** Não é recomendado...
     * #include <stdio.h>
     * int main(){
     *     char ch1, ch2;
     *     printf("Entre com duas letras:\n");
     *     scanf("%c", &ch1);
     *     scanf("%c", &ch2);
     *     printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
     *    return 0;
     *}
     * 
     *  Ao executar o código realizamos o primeiro input de letra e enviamos com o enter, mas 
     * nosso código não captura a segunda letra, por causa do teclado.
     * Ele armazena temporariamente tudo o que digitamos, mas não repassa instantaneamente para o sistema.
     * Podemos digitar algum letra e apaga-la  com a tecla backspace, mas quando apertamos o enter, o sistema 
     * recebe a letra que digiramos e o enter.
     * 
     * Esse armazenamento temporário ocorre no buffer do teclado. Como as variáveis do exemplo axima recebem
     * caracteres, a letra e o enter são armazenados, respectivamente em ch1 e ch2. Por isso ocorre o comportamento
     * inesperado.
     * 
     * *Existem duas formas de evitar que isso aconteça:
     *  - A primeira é que, dentro do scanf, antes do símbolo de formato de LEITURA, coloquemos um espaço na string...
     * scanf(" %c", &ch2), isso fará com que sejam ignorados caracteres especiais, como o enter.
     * 
     * Após a primeira chamada da função scanf(), efetue a limpeza do buffer do teclado com a seguinte isntrução:
     * 
     *  - no Windows: fflush(stdin);
     * - no linux: __fpurge();
     * 
     * 
     * * Outra função que pode ser utilizda para a leitura de char, a partir do teclado, é a getc, traduzida do inglês
     * "pegar caractere".
     * 
     * Exemplo: 
     *  char ch1;
     *  getc(ch1);
     * 
     * ! Tanto getc (ch1); quanto scanf(“%c”, ch1); terão o mesmo efeito. 
     */
    
    return 0;
}