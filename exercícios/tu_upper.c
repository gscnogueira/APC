#include <stdio.h>

void tu_upper(){
    char c='a';
    while (c!='\n'){
        c=getchar();
        if (c>='a' && c<='z'){
            c+=('A'-'a');
        }
        printf("%c",c);
    }
}
int main(){
    tu_upper();
    return 0;
}

