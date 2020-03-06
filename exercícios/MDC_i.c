#include <stdio.h>


int mdc_i(int a, int b){
int mdc, i;
for (i=1; i<=a && i<=b; ++i)
	if (a%i==0 && b%i==0)
		mdc=i;


return mdc;
}


int main(){
	int a[5],b[5], i;
	printf("Digite 10 números:\n");
	for (i=0;i<5;++i)
		scanf("%d %d", &a[i], &b[i]);
	for (i=0;i<5;++i){
		printf("-----------\n");
		printf("%d\n",mdc_i(a[i],b[i]));
	}
	return 0;
}