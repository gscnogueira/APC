/**      @file: 180113330.c
 *     @author: Gabriel da Silva Corvino Nogueira
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função IEEE754_32. Considere que o usuário
 * sabe utilizar corretamente a função (ou seja, todas as
 * entradas serão válidas). Você pode testar os valores em:
 * http://www.h-schmidt.net/FloatConverter/IEEE754.html. */

#include <stdio.h>

float potenciacao(int n, int base){
    if (n==0){
        return 1;
    }
    else{
        if (n>0){
            return base*potenciacao(n-1,base);
        }
        else {
            return 1/(base*potenciacao(-n-1,base));
        }
    }

}

float IEEE754_32() {
    /* Leia 32 bits da entrada padrão (ou seja, qualquer permutação de 32
    caracteres '0' ou '1' ). */
    int contador, expoente=0, sinal;
    float mantissa=0;
    char validar_sinal, validar_mantissa, validar_expoente;
    validar_sinal=getchar();
    if (validar_sinal=='1'){
        sinal=-1;
    }
    else{
        sinal=1;
    }
        
    for(contador=7; contador>=0;--contador){
        validar_expoente=getchar();
        if(validar_expoente=='1'){
            expoente+=potenciacao(contador,2);
        }
    }
    expoente-=127;
    
    for(contador=-1; contador>-24;--contador){
        validar_mantissa=getchar();
        if(validar_mantissa=='1'){
            mantissa+=potenciacao(contador,2);
        }
    }
        
    return sinal*((mantissa+1))*potenciacao(expoente,2);

    /* Compute o valor decimal destes bits conforme o padrão .
    http://pt.wikipedia.org/wiki/IEEE_754 */
}

int main() {
    printf("Digite 32 bits: ");
    printf("%.2f\n", IEEE754_32());

    /* Exemplos:

                 Entrada Lida              Saída
       10111111010000000000000000000000    -0,75
       10000000000000000000000000000000    -0.0
       00000000000000000000000000000000     0.0
       00111111100000000000000000000000     1.0
       00111111110000000000000000000000     1.5
       01000000000000000000000000000000     2.0
       01000000000100000000000000000000     2.25
       01000001000110000000000000000000     9.5            */

    return 0;
}

/* Dicas:
   1) A resolução tende a ser mais simples se considerar o
   problema como subproblemas distintos (por exemplo, um para
   cada "parte" da informação armazenada e a junção de todas
   as partes).
   2) Uma das possibilidades é considerar um bit de cada vez.
*/