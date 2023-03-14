#include<stdio.h>
/*
Questão 6
● Três amigos jogaram na loteria. Caso eles ganhem,
o prêmio deve ser repartido proporcionalmente ao
valor que cada deu para a realização da aposta.
Faça um programa que leia quanto cada apostador
investiu, o valor do prêmio, e imprima quanto cada
um ganharia do prêmio com base no valor investido.
*/
int main(){

   float aposta1, aposta2, aposta3, premio;

   printf("Digite o valor da 1º aposta: ");
   scanf("%f",&aposta1);
   printf("Digite o valor da 2º aposta: ");
   scanf("%f",&aposta2);
   printf("Digite o valor da 3º aposta: ");
   scanf("%f",&aposta3);
   printf("Digite qual o valor do premio: ");
   scanf("%f",&premio);

   float total = aposta1+aposta2+aposta3;
   aposta1 = (aposta1/total) * premio;
   aposta2 = (aposta2/total) * premio;
   aposta3 = (aposta3/total) * premio;

   printf("O 1º recebe = %0.2f\nO 2º recebe = %0.2f\nO 3º recebe = %0.2f\n",aposta1,aposta2,aposta3);

   return 0;
}
