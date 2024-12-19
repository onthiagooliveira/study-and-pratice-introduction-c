// Criando o hello world em C

// Diretiva pré compilação, importamos a biblioteca stdio.h para acessarmos suas funções que serão usadas no main
#include <stdio.h>

int main () {
    // Imprimindo a escrita na tela => print format = printf
    printf("Hello World!\n");

    /** Outra função que pode ser usada para escrita na tela é a puts(), traduzida do inglês como colocar caractere
     * put+string. Tanto puts() quanto printf() terão o mesmo efeito.
     * */ 
    puts("Puts! Esse Hello world também funciona!\n");

    /** A função printf também permite a utilização de variáveis para compor o que será escrito na tela.
     * Para indicar a posição de entrada de conteúdo de variáveis dos tipos...
     * 
     * listamos os principais formatos de escrita e leitura das variáveis, usados com a função printf(): 
     * Tipo	                    Formato     	    Observações
     * char                       %c	        Um único caractere 
     * int	                    %d ou %i	    Um inteiro (Base decimal)
     * int	                      %o	        Um inteiro (Base octal)
     * int	                   %x ou %X	        Um inteiro (Base hexadecimal)
     * short int                 %hd	        Um short inteiro (Base decimal)
     * long int	                 %ld	        Um long inteiro (Base decimal)
     * unsigned short int	     %hu	        Short inteiro positivo
     * unsigned int	             %u	            Inteiro positivo
     * unsigned long int	     %lu	        Long inteiro positivo
     * float	                 %f ou %e ou %E
     * double	                 %f ou %e ou %E	 
     */

    int a = 10;
    int ch = 'T';
    float real = 6.40;
    printf("A variável a = %d,\nA variável ch = %c,\nO real vale %.2f\n",   a, ch, real);
    /** A variável float por padrão utiliza seis casas decimais. Para reduzir esse número, utiliza-se
     * %.1f, %.2f, entre outros. O número entre “.” e “f” indica as casas decimais exibidas.  */

    return 0
    // Convenção para retorno da função main, 0 indica que o programa foi executado corretamente, 1 ou outro número indica ao OS que houve algum  durante a execução.
}