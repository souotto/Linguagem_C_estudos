/*************************************************************************************

1. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do
usuário a informação de 5 alunos, armazene em vetor dessa estrutura e
imprima os dados na tela.

*************************************************************************************/
#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int matricula;
    char curso[20];
};
void linha(){
    printf("==========================================================================\n");
}
int main(){

    struct aluno A[5];
    int i;

    for(i=0; i<5; i++){
       printf(" Nome: ");
       setbuf(stdin, NULL);
       fgets(A[i].nome, 20, stdin);
       printf("Numero matricula: ");
       scanf("%d",&A[i].matricula);
       printf("NOme do curso: ");
       setbuf(stdin, NULL);
       fgets(A[i].curso, 20, stdin);
    }

    for(i=0; i<5; i++){
     linha();
       printf(" ---> %s\n",A[i].nome);
       printf(" ---> Matricula: %d\n",A[i].matricula);
       printf(" ---> Nome do curso: %s\n",A[i].curso);
    }
    linha();
    return 0;
    }



