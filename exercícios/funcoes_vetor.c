#include <stdio.h>

void le_vetor(int *vetor){
    int i;
    for(i=0;i<10;++i)
        scanf("%d", &vetor[i]);
}
void mostra_positivos(int *vetor){
    int i;
    for ( i = 0; i < 10; ++i)
        if (vetor[i]>0)
            printf("%d ",vetor[i] );
    putchar('\n');
}
void mostra_pares(int *vetor){
    int i;
    for ( i = 0; i < 10; ++i)
        if (vetor[i]%2==0)
            printf("%d ",vetor[i] );
    putchar('\n');
}
void mostra_menores_2(int *vetor){
    int i;
    for ( i = 0; i < 10; ++i)
        if (vetor[i]<2)
            printf("%d ",vetor[i] );
    putchar('\n');
}
int main(){
    int vetor[10];
    le_vetor(vetor);
    mostra_positivos(vetor);
    mostra_menores_2(vetor);
    mostra_pares(vetor);
    

    
  return 0;
}