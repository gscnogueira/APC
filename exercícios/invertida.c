#include <stdio.h>

void invertida(){
    char c;
    c=getchar();
    if (c!='\n'){
        invertida();
        putchar(c);
    }

}
int main(){
    invertida();
    putchar('\n');
    return 0;
}