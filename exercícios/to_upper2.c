#include <stdio.h>

char to_upper(char c){
    return(c>='a' && c<='z' ? (c+('A'-'a')):c);   
}
int main() {
    char c='a';
    printf("Digite uma sequencia de caracteres:");
    while(c!='\n'){
        c=getchar();
        printf("%c", to_upper(c));
    }
    putchar('\n');
  return 0;
}