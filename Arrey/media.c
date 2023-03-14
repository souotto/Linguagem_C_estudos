#include <stdio.h>
#include <stdlib.h>

int main(){
//leia as notas de uma turma de cinco estudantes e depois imprima as notas que são
//maiores do que a média da turma.
   float nota[5];
   int i;

   for(i=0; i<5; i++){
    printf("Digite a nota: ");
    scanf("%f",&nota[i]);
   }

   float media = 0;

   for(i=0; i<5; i++){
    media = media+nota[i];
    media = media/5;
   }
   printf("-- Media = %0.2f --\n",media);
   printf("\nA notas maiores:\n\n");

   for(i=0; i<5; i++){
    if(nota[i] > media)
     printf("%0.2f\n",nota[i]);
   }

  return 0;
}
