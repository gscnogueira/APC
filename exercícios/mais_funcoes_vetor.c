#include <stdio.h>

void le_vetor(int *vetor){
    int i;
    for(i=0;i<10;++i)
        scanf("%d", &vetor[i]);
}
void dobra( int* vetor){
	int i;
    for(i=0;i<10;++i)
    	printf("%d ",vetor[i]*2 );
     putchar('\n');
}
void modulo(int* vetor){
	int i;
    for(i=0;i<10;++i)
    	printf("%d ",(vetor[i]>0? vetor[i] : -vetor[i]));
     putchar('\n');
}
int main(){
	int vetor[10];
	le_vetor(vetor);
	dobra(vetor);
	modulo(vetor);

	return 0;
}