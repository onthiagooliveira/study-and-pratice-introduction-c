#include <stdio.h>
#include <string.h>

int main() {

    printf("Digite seu nome para entrar: \n");
    // Inicialização do vetor para representar o nome de uma pessoa com até 7 caracteres
    char cadeia[7];
    
    
    scanf("%s", cadeia);
    /** Armazenando a entrada de dados:
     * scanf("%s") irá interroper a leitura quando encontrar um espaço em branco (ou outro delimitador),
     * então o tamanho da entrada vai ser automaticamente limitado pelo tamanho do vetor.
     * 
     * ? Não é necessário utilizar & :
     * em C, o operador & é utilizado para obter o endereço de memória de uma variável, o que é necessário
     * quando desejamos passar um endereço de variável para uma função que espera um ponteiro (como o scanf).
     * No entanto, a questão do uso do & no scanf depende do tipo de variável que vocẽ está usando e como a 
     * função interpreta os parâmetros.
     * 
     * No caso de um vetor de caracteres, char[]:
     * Quando passamos um vetor (como char cadeia[7]) para o scanf, não precisamos usar o operador &. 
     * Isso ocorre porque em C, o nome de um array/vector é um ponteiro para o primeiro elemento do array.
     * 
     * Ou seja, quando declaramos o vetor,  char cadeia[7], o nome do array cadeia é automaticamente 
     * interpretado pelo compilador como o endereço de memória do primeiro elemento do array (&cadeia[0]).
     * 
     * Isso significa que o scanf já recebe o endereço de memória correto para armazenar os caracteres digitados.
     * 
     * 
     * ! OBS: scanf não é o melhor método para colher cadeia de caracteres que contenham espaços,
     * podemos usar fgets() em vez de scanf("%s"), pois scanf vai parar de ler no primeiro espaço encontrado.
    */

    printf("%s\n ", cadeia);
}