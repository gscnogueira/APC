#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar){
	if (n==0)
		return;
	hanoi(n-1,origem,auxiliar,destino);
	printf("%c->%c\n",origem, destino);
	hanoi(n-1, auxiliar, destino, origem);
}

int main(){
	int n;
	printf("Digite o numero de discos que serão movidos:");
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return 0;
}