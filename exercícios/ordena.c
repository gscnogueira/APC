#include <stdio.h>

void troca(int* a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}
void ordena(int* a, int *b, int *c){
    if(*a>*b)
        troca(a,b); 
    if(*b>*c)
        troca(b,c);
    if(*a>*b)
        troca(a,b);
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    ordena(&a, &b,&c);
    printf("%d<=%d<=%d\n", a, b, c);

    
  return 0;
}