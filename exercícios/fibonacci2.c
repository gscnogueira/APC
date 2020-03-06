#include <stdio.h>

int n_termo_de_fibonacci(int n){
	if(n==1)
		return 1;
	if (n==0)
		return 0;
	return n_termo_de_fibonacci(n-1)+n_termo_de_fibonacci(n-2);
}
void fibonacci(int termos){
	int i;
	for (i = 0; i <termos ; ++i)
	{
		printf("%d ", n_termo_de_fibonacci(i));
	}
	putchar('\n');
}
int main(){
	int termos;
	printf("Digite o numero de termos desejado:");
	scanf("%d",&termos);
	fibonacci(termos);
return 0;
}