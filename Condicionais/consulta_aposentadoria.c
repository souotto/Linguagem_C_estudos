/******************************************************************************
9. Leia a idade e o tempo de serviço de um trabalhador
e escreva se ele pode ou
não se aposentar. As condições para aposentadoria
são Ter pelo menos 65 anos,
Ou ter trabalhado pelo menos 30 anos,
Ou ter pelo menos 60 anos e trabalhado pelo
menos 25 anos.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float idade, tempo;
    printf("digite a sua idade --> ");
    scanf("%f",&idade);
    printf("quanto tempo (anos) voce trabalhou --> ");
    scanf("%f",&tempo);
     if(((idade>=65) || (tempo>=30)) || (idade>=60 && tempo>=25))
         printf("Voce pode se aposentar\n");
      else
         printf("Voce ainda nao pode aposentar\n");
    return 0;
}
