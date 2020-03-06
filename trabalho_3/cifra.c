/**      @file: 180113330.c
 *     @author: Gabriel da Silva Corvino Nogueira
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções cifra() e decifra(). As funções recebem um valor
 * inteiro positivo X (0 <= X <= 26) como argumento, e então lêem uma quantidade
 * indeterminada de caracteres (ASCII) para cifrá-los ou decifrá-los,
 * respectivamente. A entrada de caracteres termina com um espaço ou quebra de
 * linha.
 *
 * A cifra é simples, basta trocar cada letra pelo equivalente em X posições à
 * direita no alfabeto. Ela mantém a caixa da letra (maiúsculas são cifradas
 * em maiúsculas, e minúsculas em minúsculas). A cifra também é "circular", ou
 * seja, se as X posições excederem a última letra, continue a partir da
 * primeira. Por exemplo, supondo X = 3:
 *
 * Entrada: abcdefghijklmnopqrstuvwxyz
 *   Saída: defghijklmnopqrstuvwxyzabc
 *
 * E para X = 17:
 *
 * Entrada: abcdefghijklmnopqrstwxyz
 *   Saída: rstwxyzabcdefghijklmnopq
 *
 * Obviamente, para recuperar a mensagem original é preciso trocar a letra por X
 * posições à esquerda no alfabeto.
 *
 * Exemplos:
 *
 *                    | Entrada | Saída
 *     ---------------+---------+------
 *     cifra(2)       | ABCde   | CDEfg
 *     cifra(3)       | abcDE   | defGH
 *     cifra(26)      | abc     | abc    <-- que exemplo interessante!
 *     cifra(0)       | abc     | abc    <-- que exemplo interessante!
 *     cifra(5)       | Cifra   | Hnkwf
 *     cifra(11)      | de      | op
 *     cifra(17)      | Cesar   | Tvjri
 *     decifra(2)     | CDEfg   | ABCde
 *     decifra(3)     | defGH   | abcDE
 *     decifra(26)    | abc     | abc    <-- que exemplo interessante!
 *     decifra(0)     | abc     | abc    <-- que exemplo interessante!
 *     decifra(5)     | Hnkwf   | Cifra
 *     decifra(11)    | op      | de
 *     decifra(17)    | 1   | Cesar                                       */

#include <stdio.h>

void cifra(int x) {
    if (x>25){
        x-=26;
    }
    char caractere;
    caractere=getchar();
    while(caractere!='\n'&& caractere!=' '){
        if (caractere+x>127){
            caractere-=26;
        }
        caractere+=x;
        

        if((caractere>'Z' && caractere <'a')||caractere>'z'){
            caractere-=26;
        }
            
        printf("%c", caractere);
        caractere=getchar();
    }
    printf("\n");
}

void decifra(int x) {
	if (x>25){
        x-=26;
    }
    char caractere;
    caractere=getchar();
    while(caractere!='\n'&& caractere!=' '){
       if (caractere>='A' && caractere<='Z'){
           
        caractere-=x;
    
        if(caractere<'A'){
            caractere+=26;
        }
       }
        else {
            caractere-=x;
            if (caractere<'a')
                caractere+=26;
        }
        printf("%c", caractere);
        caractere=getchar();
    }
    printf("\n");
}

int main() {
	/* Teste as funções aqui. */
    cifra(17);
    return 0;
}
