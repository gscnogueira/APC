#include <stdio.h>

int utiliza_chave(int* indice){
    if(*indice>7)
        *indice=0;
    char chave[]="ehotruvs";
    return chave[*indice]-'a';

}
void cifra(char* string, int* indice_chave){
    int i,numero_de_caracteres_deslocados;
    for(i=0;string[i]!='\0';++i){
        if((string[i]>='a'&& string[i]<='z')||(string[i]>='A'&& string[i]<='Z')){
            numero_de_caracteres_deslocados=utiliza_chave(indice_chave);
            if (string[i]+numero_de_caracteres_deslocados>127){
                string[i]-=26;
            }
            string[i]+=numero_de_caracteres_deslocados;
                

            if((string[i]>'Z' && string[i] <'a')||string[i]>'z'){
                string[i]-=26;
            }
            *indice_chave+=1;
        }  
    }
}

void decifra(int x) {
	if (x>25){
        x-=26;
    }
    char caractere;
    caractere=getchar();
    while(caractere!='\n'&& caractere!=' '){
       if (caractere>='A' && caractere<='Z'){
           
        caractere-=x;
    
        if(caractere<'A'){
            caractere+=26;
        }
       }
        else {
            caractere-=x;
            if (caractere<'a')
                caractere+=26;
        }
        printf("%c", caractere);
        caractere=getchar();
    }
    printf("\n");
}

int main() {
	/* Teste as funções aqui. */
    
    return 0;
}