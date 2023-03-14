#include<stdio.h>
/*
Questão 5
● Faça um programa que leia o valor da hora de
trabalho (em reais) e número de horas trabalhadas
no mês. Imprima o valor a ser pago ao funcionário,
adicionando 10% sobre o valor calculado.
*/
int main(){

   const float bonus = 0.10;
   float valorHora, numeroHoras, receber;

   printf("Digite Qual o valor de hora trabalhada ?: ");
   scanf("%f",&valorHora);
   printf("Digite quantas horas foram trabalhadas: ");
   scanf("%f",&numeroHoras);

   receber = valorHora*numeroHoras;
   receber = (receber*bonus)+receber;

   printf("total a receber mais 10 por cento = R$ %0.2f\n",receber);

   return 0;
}
