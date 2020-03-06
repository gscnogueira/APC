#include <stdio.h>

char maior(){
    char maior=0, c;
    int i;
    printf("Digite 10 caracteres:");
    for ( i = 0; i < 10; ++i){
        c=getchar();
        if(c>maior)
            maior=c;
    }
    return maior;
}

int main() {
    printf("%c é o maior caractere\n", maior() );
  


  return 0;
}