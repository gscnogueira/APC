#include <stdio.h>

/* Transforma todas as letras do alfabeto presentes no string
 * dado em sua versão maiúscula, não altera os demais
 * caracteres. */
void to_upper(char* str) {
	int i;
    for (i=0;str[i]!='\0'; ++i)
    	if (str[i]>='a' && str[i]<='z')
    		str[i]+=('A'-'a');
}

int main() {
    char string[1001];

    scanf("%[^\n]", string);
    to_upper(string);
    printf("%s\n", string);

    return 0;
}