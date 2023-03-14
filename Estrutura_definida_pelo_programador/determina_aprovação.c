/**************************************************************************************************************

2. Crie uma estrutura representando os alunos de um determinado curso. A
   estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota
   da segunda prova e nota da terceira prova.

1 - Permita ao usuário entrar com os dados de 5 alunos.
2 - Encontre o aluno com maior nota da primeira prova.
3 - Encontre o aluno com maior média geral.
4 - Encontre o aluno com menor média geral
5 - Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
    aprovação.

***************************************************************************************************************/
#include <stdio.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[20];
    float n1, n2, n3, media;
};
void linha(){
    printf("==========================================================================\n");
}
int main(){

    struct aluno A[2];  int i; float maiorNota, maiorMedia, menorMedia;
    char recebeNome[22], alunoMaiorMedia[22];
    char alunoMenorMedia[22];

    maiorNota = A[0].n1;
    maiorMedia = menorMedia = 6;

    for(i=0; i<2; i++){
       printf(" Nome: ");
       setbuf(stdin, NULL);
       fgets(A[i].nome, 20, stdin);
       printf("Numero matricula: ");
       scanf("%d",&A[i].matricula);
       printf("Nota da primeira: ");
       scanf("%f",&A[i].n1);
       printf("Nota da segunda: ");
       scanf("%f",&A[i].n2);
       printf("Nota da terceira: ");
       scanf("%f",&A[i].n3);

       if(maiorNota < A[i].n1){
         maiorNota = A[i].n1;
         strcpy(recebeNome, A[i].nome);
         }

         A[i].media = (A[i].n1 + A[i].n2 + A[i].n3)/3;

    }

    for(i=0; i<2; i++){

       if(menorMedia>A[i].media){
          menorMedia = A[i].media;
          strcpy(alunoMenorMedia, A[i].nome);
          }

       if(maiorMedia<A[i].media){
          maiorMedia = A[i].media;
          strcpy(alunoMaiorMedia, A[i].nome);
        }
         linha();
         if(A[i].media >= 6)
            printf("Aluno %s APROVADO\n",A[i].nome);

            if(A[i].media <6)
               printf("Aluno %s REPROVADO\n",A[i].nome);
    }
    linha();
    printf(" %s -> %0.2f na Primeira\n",recebeNome ,maiorNota);
    printf(" %s Menor Media: %0.2f \n",alunoMenorMedia ,menorMedia);
    printf(" %s Maior Media: %0.2f \n",alunoMaiorMedia ,maiorMedia);
    linha();

    return 0;
    }





