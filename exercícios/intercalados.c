#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], i;
    for (i = 0; i < 10; ++i){
        scanf("%d", &vetor1[i]);
    }
    for (i = 0; i < 10; ++i){
        scanf("%d", &vetor2[i]);
    }
    
    for (i=0; i<10; ++i){
        printf("%d ",vetor1[i]);
        printf("%d ",vetor2[i]);
    }
    putchar('\n');
    
  return 0;
}