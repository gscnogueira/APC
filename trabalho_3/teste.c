#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int x;
	char y;
	x='h'-'a';
	y='y';
	printf("%d\n", x );
	printf("%c\n",y-x );

	return 0;
}