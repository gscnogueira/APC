#include <stdio.h>

int fribonacci(int n){
	if(n==1)
		return 1;
	if (n==0)
		return 0;
	return fribonacci(n-1)+fribonacci(n-2);
}
int main(){
	int termo;
	printf("Digite o numero da posição do termo desejado:");
	scanf("%d",&termo);
	printf("%d\n",fribonacci(termo));
	

return 0;
}