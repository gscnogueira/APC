#include <stdio.h>

int min(int a, int b){
	return(a < b ? a : b);
}
int max(int a, int b){
	return(a > b ? a : b);
}
int mdc_r(int a, int b){
	int x, y;
	x=max(a,b);
	y=min(a,b);
	if (x%y==0)
		return y;
	return mdc_r(y,(x%y));
}


int main(){
	int a[5],b[5], i;
	printf("Digite 10 números:\n");
	for (i=0;i<5;++i)
		scanf("%d %d", &a[i], &b[i]);
	for (i=0;i<5;++i){
		printf("-----------\n");
		printf("%d\n",mdc_r(a[i],b[i]));
	}
	return 0;
}