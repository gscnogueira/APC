/**      @file: 180113330.c
 *     @author: Gabriel da Silva Corvino Nogueira
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Programa destinado as seguintes funções:
 * -Traduzir mensagens escritas em código binário  para a linguagem humana usual;
 * -Codificar e decodificar a mensagem a partir do método da cifra de  vigenere;
 * -Após ser traduzido, o programa cria um arquivo texto para armazenar as informações traduzidas temporariamente;
 * -Após a CODIFICAÇÃO, um arquivo binário é gerado para guardar as informações codificadas que serão enviadas ao seu superior;
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	char nome [20];
	char dieta [15];
	int tempo_medio_de_vida;
	int nivel_de_inteligencia;
	float estatura_media;
	float peso_medio;
} __attribute__((packed))especies_t;

void Pressione_enter(char * objetivo){
    printf("\n\n\nPressione Enter para %s...\n", objetivo);
    while(getchar()!='\n');
    system("clear");
}
void mostra_titulo(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t'########::'########::'######:::'#######::'########::'####:'########:'####::'######:::::'###::::'########:::'#######::'########::\n");
	printf("\t ##.... ##: ##.....::'##... ##:'##.... ##: ##.... ##:. ##:: ##.....::. ##::'##... ##:::'## ##::: ##.... ##:'##.... ##: ##.... ##:\n");
	printf("\t ##:::: ##: ##::::::: ##:::..:: ##:::: ##: ##:::: ##:: ##:: ##:::::::: ##:: ##:::..:::'##:. ##:: ##:::: ##: ##:::: ##: ##:::: ##:\n");
	printf("\t ##:::: ##: ######::: ##::::::: ##:::: ##: ##:::: ##:: ##:: ######:::: ##:: ##:::::::'##:::. ##: ##:::: ##: ##:::: ##: ########::\n");
	printf("\t ##:::: ##: ##...:::: ##::::::: ##:::: ##: ##:::: ##:: ##:: ##...::::: ##:: ##::::::: #########: ##:::: ##: ##:::: ##: ##.. ##:::\n");
	printf("\t ##:::: ##: ##::::::: ##::: ##: ##:::: ##: ##:::: ##:: ##:: ##:::::::: ##:: ##::: ##: ##.... ##: ##:::: ##: ##:::: ##: ##::. ##::\n");
	printf("\t ##:::: ##: ##::::::: ##::: ##: ##:::: ##: ##:::: ##:: ##:: ##:::::::: ##:: ##::: ##: ##.... ##: ##:::: ##: ##:::: ##: ##::. ##::\n");
	printf("\t ########:: ########:. ######::. #######:: ########::'####: ##:::::::'####:. ######:: ##:::: ##: ########::. #######:: ##:::. ##:\n");
	printf("\t........:::........:::......::::.......:::........:::....::..::::::::....:::......:::..:::::..::........::::.......:::..:::::..::\n");
	printf("\n");
	printf("\n");
}
void mostra_nome_do_programa(){
	printf("___  ____ ____ ____ ___  _ ____ _ ____ ____ ___  ____ ____ \n");
	printf("|  \\ |___ |    |  | |  \\ | |___ | |    |__| |  \\ |  | |__/ \n");
	printf("|__/ |___ |___ |__| |__/ | |    | |___ |  | |__/ |__| |  \\ \n");
	printf("                                                           \n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}
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
void decifra(char* string, int* indice_chave) {
	int i, numero_de_caracteres_deslocados;
    for(i=0;string[i]!='\0';++i){
       	if ((string[i]>='A' && string[i]<='Z')||(string[i]>='a' && string[i]<='z')){
       		numero_de_caracteres_deslocados=utiliza_chave(indice_chave);
       		string[i]-=numero_de_caracteres_deslocados;
        	if(string[i]<'A')
            string[i]+=26;
        	else
        		if(string[i]<'a')
        			string[i]+=26;
        	*indice_chave+=1;
       }
    }   
}
char validar_resposta_do_usuario_menu(){
    char resposta;
    char validador;
    scanf ("%c",&resposta);
    scanf ("%c",&validador);   
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while ((validador!='\n')||((resposta!='1')&&(resposta!='2')&&(resposta!='3'))){ 
            printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
            printf ("Digite um número da legenda que corresponde à jogada desejada:");
            scanf ("%c",&resposta);
            scanf ("%c",&validador);
            resposta=tolower(resposta);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    return resposta;
}
char validar_resposta_do_usuario(){
    char resposta;
    char validador;
    scanf ("%c",&resposta);
    scanf ("%c",&validador); 
    resposta=tolower(resposta);  
    if (validador!='\n'){
        while (getchar()!='\n');
    }   
        while ((validador!='\n')||((resposta!='s')&&(resposta!='n'))){ 
            printf("Resposta invalida, meu caro...\nTente novamente!\n\n");
            printf ("Digite um número da legenda que corresponde à jogada desejada:");
            scanf ("%c",&resposta);
            scanf ("%c",&validador);
            resposta=tolower(resposta);
            if (validador!='\n'){
                while (getchar()!='\n');
            }
        }
    return resposta;
}
void escreve_txt(char* arquivo, especies_t* especies, int n){
	int i;
	FILE* fp=fopen(arquivo, "w+");
	if(!fp) {
        printf("Não foi possível abrir \"%s\".\n",arquivo);
        return;
	}
	fprintf(fp,"Informações:\n\n");
	for(i=0;i<n;++i){
		fprintf(fp, "Nome: %s\n",especies[i].nome);
		fprintf(fp, "Dieta: %s\n",especies[i].dieta);
		fprintf(fp, "Tempo Médio de Vida:%d\n",especies[i].tempo_medio_de_vida);
		fprintf(fp, "Nível de inteligencia:%d\n",especies[i].nivel_de_inteligencia);
		fprintf(fp, "Estatura Média:%f\n",especies[i].estatura_media);
		fprintf(fp, "Peso Médio:%f\n\n",especies[i].peso_medio);
	}
	fclose(fp);
}
void mostra_informacoes(int numero_de_especies, especies_t* especies){
	int i;
	printf("Informações:\n\n");
				for(i=0;i<numero_de_especies;++i){
					printf("Nome: %s\n", especies[i].nome);
					printf("Dieta: %s\n", especies[i].dieta);
					printf("Tempo Médio de vida: %d\n", especies[i].tempo_medio_de_vida);
					printf("Nível de Inteligencia: %d\n", especies[i].nivel_de_inteligencia);
					printf("Estatura Média: %f\n", especies[i].estatura_media);
					printf("Peso Médio: %f\n", especies[i].peso_medio);
					putchar('\n');
				}
}
int main(){
	char arquivo[]="mensagem.bin";
	char resposta, opcao_usuario;
	int numero_de_especies,i, indice_chave=0;
	especies_t especies[10];
	FILE *fp;
	FILE *fp2;
	while(1){
		mostra_titulo();
		printf("\n\t\t\t\t\t\t\t1-CODIFICAR\n\t\t\t\t\t\t\t2-DECODIFICAR\n\t\t\t\t\t\t\t3-SAIR\n");
		printf("\nPRESSIONE A TECLA CORRESPONDENTE A SUA ESCOLHA:");
		opcao_usuario=validar_resposta_do_usuario_menu();
		system("clear");
		if(opcao_usuario=='1'){
			fp=fopen(arquivo, "rb");
			if(!fp) {
		        printf("Não foi possível abrir \"%s\".\n",arquivo);
		        return EXIT_FAILURE;
			}
			fread(&numero_de_especies,sizeof(numero_de_especies),1,fp);
			fread(especies, sizeof(especies), 1, fp);
			fclose(fp);
			escreve_txt("especies.txt", especies, numero_de_especies);
			mostra_nome_do_programa();
			printf("\n\n\nCaso deseje ver a mensagem secreta digite \"s\", caso contrário digite\"n\":");
			resposta=validar_resposta_do_usuario();
			system("clear");
			
			if(resposta=='s')
				mostra_informacoes(numero_de_especies, especies);
			if(resposta=='n')
				mostra_nome_do_programa();
			Pressione_enter("para codificar a mensagem");
			for(i=0;i<numero_de_especies;++i){
				cifra(especies[i].nome,&indice_chave);
				cifra(especies[i].dieta,&indice_chave);
				indice_chave=0;
			}
			mostra_nome_do_programa();
			printf("\n\n\nMensagem codifaicada.\n");
			printf("\n\n\nCaso deseje ver a mensagem codificada digite \"s\", caso contrário digite\"n\":");
			resposta=validar_resposta_do_usuario();
			system("clear");
			if(resposta=='s')
				mostra_informacoes(numero_de_especies, especies);
			else
				mostra_nome_do_programa();
			Pressione_enter("para enviar a mensagem codificada para o seu superior");
			fp2=fopen("codificado.bin", "wb+");
			if(!fp2) {
		        printf("Não foi possível abrir \"%s\".\n","codificado.bin");
		        return EXIT_FAILURE;
			}
			fwrite(&numero_de_especies, sizeof(numero_de_especies), 1, fp2);
			for(i=0;i<numero_de_especies;++i){
				fwrite(especies[i].nome,sizeof(especies[i].nome), 1, fp2);
				fwrite(especies[i].dieta,sizeof(especies[i].dieta), 1, fp2);
				fwrite(&especies[i].tempo_medio_de_vida,sizeof(especies[i].tempo_medio_de_vida), 1, fp2);
				fwrite(&especies[i].nivel_de_inteligencia,sizeof(especies[i].nivel_de_inteligencia), 1, fp2);
				fwrite(&especies[i].estatura_media,sizeof(especies[i].estatura_media), 1, fp2);
				fwrite(&especies[i].peso_medio,sizeof(especies[i].peso_medio), 1, fp2);
			}
			fclose(fp2);
			mostra_nome_do_programa();
			printf("\n\n\nMensagem enviada.\n");
			Pressione_enter("para voltar para o menu");
		}
		if(opcao_usuario=='2'){
			fp=fopen("codificado.bin", "rb");
			if(!fp) {
		        printf("Não foi possível abrir \"%s\".\n","codificado.bin");
		        return EXIT_FAILURE;
		    }
		    fread(&numero_de_especies, sizeof(numero_de_especies), 1, fp);
		    for(i=0;i<numero_de_especies;++i){
		    	fread(especies[i].nome,sizeof(especies[i].nome), 1, fp);
				fread(especies[i].dieta,sizeof(especies[i].dieta), 1, fp);
				fread(&especies[i].tempo_medio_de_vida,sizeof(especies[i].tempo_medio_de_vida), 1, fp);
				fread(&especies[i].nivel_de_inteligencia,sizeof(especies[i].nivel_de_inteligencia), 1, fp);
				fread(&especies[i].estatura_media,sizeof(especies[i].estatura_media), 1, fp);
				fread(&especies[i].peso_medio,sizeof(especies[i].peso_medio), 1, fp);
		    }
		    fclose(fp);
		    mostra_nome_do_programa();
		    printf("\n\n\nCaso deseje ver a mensagem codificada digite \"s\", caso contrário digite\"n\":");
		    resposta=validar_resposta_do_usuario();
		    system("clear");
		    if(resposta=='s')
		    	mostra_informacoes(numero_de_especies, especies);
		    if(resposta=='n')
		    	mostra_nome_do_programa();
		    Pressione_enter("para decodificar essa mensagem");
		    for(i=0;i<numero_de_especies;++i){
				decifra(especies[i].nome,&indice_chave);
				decifra(especies[i].dieta,&indice_chave);
				indice_chave=0;
			}
			mostra_nome_do_programa();
			printf("\n\n\nMensagem decodificada.\n");
			printf("\n\n\nCaso deseje ver a mensagem decodificada digite \"s\", caso contrário digite\"n\":");
			resposta=validar_resposta_do_usuario();
			system("clear");
			if(resposta=='s')
		    	mostra_informacoes(numero_de_especies, especies);
		    if(resposta=='n')
		    	mostra_nome_do_programa();
		    Pressione_enter("para voltar para o menu");

		}
		if(opcao_usuario=='3')
			break;
	}
	

	return 0;
}