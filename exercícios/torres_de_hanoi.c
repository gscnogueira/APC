#include <stdio.h>

void TH(int n, char Origem, char Destino, char aux){
	if (n==0)
		return;

	TH(n-1, Origem, aux, Destino);

	printf("%c->%c\n",Origem, Destino);

	TH(n-1, aux, Destino, Origem);




}
int main(){
	int n;
	scanf ("%d",&n );
	TH(n, 'A', 'C', 'B');

return 0;
}

