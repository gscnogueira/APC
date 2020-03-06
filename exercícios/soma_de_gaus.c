#include <stdio.h>

int soma_de_galss(int numero){
	if(numero==1)
		return 1;
	return numero+soma_de_galss(numero-1);
}
int main(){
	int numero;
	printf("Digite um número:");
	scanf("%d",&numero);
	printf("%d\n", soma_de_galss(numero));

return 0;
}