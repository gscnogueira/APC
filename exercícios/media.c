#include <stdio.h>


int main() {
    float notas[100], media=0;
    int alunos, i;
    printf("Digite o número de alunos:");
    scanf("%d", &alunos);
    for (i = 0; i < alunos; ++i){
        printf("Digite a nota do aluno:");
        scanf("%f", &notas[i]);
        media+=notas[i];
    }
    media/=alunos;
    printf("média:%.2f\n", media);
    printf("notas acima da média:\n");
    for (i = 0; i < alunos; ++i)
        if(notas[i]>=media)
            printf("%.2f\n", notas[i]);   
  
  return 0;
}