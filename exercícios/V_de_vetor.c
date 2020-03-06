/**      @file: 180113330.c
 *     @author: Gabriel da Silva Corvino Nogueira
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções de modo que o código funcione. */

#include <stdio.h>

/* Pede um número inteiro positivo N ao usuário e o retorna se for válido
 * (0 < N <= 100), repetindo o pedido caso contrário. Assume que o usuário
 * insere apenas valores inteiros. */
int le_tamanho_do_vetor() {
    int numero;
    printf("Digite N (0 < N <= 100):");
    scanf("%d", &numero);
    while(getchar()!='\n');
    while(numero<=0 || numero>100){
        printf("Número inválido.\n");
        printf("Digite N (0 < N <= 100):");
        scanf("%d", &numero);
        while(getchar()!='\n');
    }
    
    return numero;
	/* Exemplo:
	 *
	 * Digite N (0 < N <= 100): -1
	 * Número inválido.
	 * Digite N (0 < N <= 100): 101
	 * Número inválido.
	 * Digite N (0 < N <= 100): 5      <- retorna 5 */
}

/* Pede uma letra ao usuário e retorna o caractere equivalente se for válido, ou
 * seja, se for uma letra do alfabeto latino, repetindo o pedido caso contrário.
 * Assume que o usuário insere apenas caracteres ASCII. */
char uma_letra() {
    char letra;
    printf("Digite uma letra:");
    scanf("%c", &letra);
    while(getchar()!='\n');
    while((letra <'a' || letra >'z')&&(letra <'A' || letra >'Z')){
        printf("Letra inválida.\n");
        printf("Digite uma letra:");
        scanf("%c", &letra);
        while(getchar()!='\n');
    }
    return letra;
	/* Exemplo:
	 *
	 * Digite uma letra: a             <- retorna 'a'
	 *
	 * Digite uma letra: 1
	 * Letra inválida.
	 * Digite uma letra: L             <- retorna 'L' */
}

/* Lê N elementos e os armazena no vetor dado, na mesma ordem em que são lidos.
 * Assume que o vetor comporta pelo menos N elementos e que o usuário só insere
 * dados válidos (caracteres ASCII). */
void le_elementos(char *vetor, int N) {
    int i;
    printf("Digite %d caracteres:", N );
    for (i=0;i<N;++i){
        vetor[i]=getchar();
    }
    while(getchar()!='\n');
	/* Supondo o vetor[5]:
	 *
	 * le_elementos(vetor, 3);
	 *     -> Usuário insere "car"   -> vetor == {'c', 'a', 'r', ?, ?}
	 *
	 * le_elementos(vetor, 4);
	 *     -> Usuário insere "carr"  -> vetor == {'c', 'a', 'r', 'r', ?}
	 *
	 * le_elementos(vetor, 5);
	 *     -> Usuário insere "carro" -> vetor == {'c', 'a', 'r', 'r', 'o'} */
}

/* Mostra o N primeiros elementos do vetor dado. Assume que N nunca é maior que
 * a quantidade total de elementos no vetor (e também que N >= 1). */
void mostra(char *vetor, int N) {
    int i;
    printf("\"");
    for (i=0;i<N;++i)
        printf("%c",vetor[i]);
     printf("\"\n");
    
	/* Supondo o vetor {'c', 'a', 'r', 'r', 'o'}:
	 *
	 * mostra(vetor, 3); -> "car"
	 * mostra(vetor, 4); -> "carr"
	 * mostra(vetor, 5); -> "carro"
	 *
	 * Deve mostrar as aspas. */
}

/* Ordena os N primeiros elementos do vetor dado em ordem crescente. Assume que
 * N nunca é maior que a quantidade total de elementos no vetor (e também que
 * N >= 1). */

void ordena(char *vetor, int N) {
    int i,j;
    char aux;
    for(j=0;j<N;++j){
        for (i=1; i<N;++i){
            if (vetor[i]<vetor[i-1]){
            	aux=vetor[i];
            	vetor[i]=vetor[i-1];
            	vetor[i-1]=aux;

                
        	}
        }
    }    
        
	/* Supondo o vetor {'c', 'a', 'r', 'r', 'o'}:
	 *
	 * ordena(vetor, 3); -> vetor == {'a', 'c', 'r', 'r', 'o'}
	 * ordena(vetor, 4); -> vetor == {'a', 'c', 'r', 'r', 'o'}
	 * ordena(vetor, 5); -> vetor == {'a', 'c', 'o', 'r', 'r'}
	 *
	 * Existem diversos algoritmos para ordenação, alguns simples outros nem
	 * tanto. Uma ideia de fácil implementação é simplesmente comparar dois
	 * elementos consecutivos no vetor e, caso estejam fora de ordem, trocá-los
	 * de posição. Este processo precisa ser repetido algumas vezes até que o
	 * vetor esteja ordenado. */
}

/* Busca o caractere dado no vetor e retorna o índice da primeira ocorrência
 * dele no vetor, se houver, -1 caso contrário. Assume que N nunca é maior que
 * a quantidade total de elementos no vetor (e também que N >= 1). */

int indice_de(char *vetor, int N, char c) {
	int i, ocorrencia;
	for (i = 0; i < N; ++i)
	{
		if(vetor[i]!= c)
			ocorrencia=-1;
		else{
			ocorrencia=i;
			break;
		}

	}
	return ocorrencia;
	/* Supondo o vetor {'c', 'a', 'r', 'r', 'o'}:
	 *
	 * indice_de(vetor, 3, 'o') == -1
	 * indice_de(vetor, 4, 'o') == -1
	 * indice_de(vetor, 5, 'o') == 4
	 * indice_de(vetor, 5, 'c') == 0
	 * indice_de(vetor, 5, 'a') == 1
	 * indice_de(vetor, 5, 'r') == 2
	 *
	 * Existem diversas formas de buscar um elemento em um vetor, a mais simples
	 * é começar do início (como disse o Rei), e ir até o fim do vetor. Mas
	 * certas condições permitem que se faça uma busca mais eficiente, no estilo
	 * do Método da Bissecção... */
}

/* Pede uma letra ao usuário e a busca no vetor dado. Assume que N nunca é maior
 * que a quantidade total de elementos no vetor (e também que N >= 1). */
void busca_letra(char *vetor, int N) {
	char c = uma_letra();
	int i = indice_de(vetor, N, c);

	if(i >= 0)
		printf("\nO caractere '%c' está na %da posição do vetor.\n", c, i);
	else
		printf("\nO caractere '%c' não está no vetor.\n", c);
}

/* Apenas um exemplo de uso das funções acima. */
int main() {
	char vetor[100];
	int N = le_tamanho_do_vetor();

	le_elementos(vetor, N);
	printf("\nO vetor é: ");
	mostra(vetor, N);
	busca_letra(vetor, N);

	ordena(vetor, N);
	printf("\nO vetor ordenado é: ");
	mostra(vetor, N);
	busca_letra(vetor, N);

    return 0;
}

/* Exemplo de teste:
 *
 * Digite N (0 < N <= 100): 10
 *
 * Digite 10 caracteres: EisABanana
 *
 * O vetor é: "EisABanana"
 * Digite uma letra: n
 *
 * O caractere 'n' está na 6a posição do vetor.
 *
 * O vetor ordenado é: "ABEaaainns"
 * Digite uma letra: x
 *
 * O caractere 'x' não está no vetor.
 **/
