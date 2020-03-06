#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome [21];
	char dieta [16];
	int tempo_medio_de_vida;
	int nivel_de_inteligencia;
	float estatura_media;
	float peso_medio;
}formato;

int cria(char* arquivo){
	int n=3;
	formato memes={"Memes","minha alma", 1, 2, 0.5, 8.9};
	formato guilherme={"Tio Gui","file", 80, 100, 1.75, 85.74};
	formato ciro={"Ciro","protoneoliberal", 90, 200, 1.87, 92.37};

	FILE *fp=fopen(arquivo,"wb+");
	if(!fp) {
        printf("Não foi possível abrir \"%s\".\n",arquivo);
        return EXIT_FAILURE;
    }
    fwrite(&n, sizeof(n),1,fp);
    fwrite(&memes, sizeof(memes),1,fp);
    fwrite(&guilherme, sizeof(guilherme),1,fp);
    fwrite(&ciro, sizeof(ciro),1,fp);
    fclose(fp);
    return EXIT_SUCCESS;
}
int main(){
	cria("memes.bin");


	return 0;
}