#include <stdio.h>


int my_strlen(char* str) {
	int i;
    for (i = 0; str[i]!='\0'; ++i);
    return i;
   
}

int main() {
    char string[1001];

    scanf("%[^\n]", string);
    printf("%d\n", my_strlen(string));

    return 0;
}