#include<stdio.h>
/*
Questão 4
● Uma empresa contrata um encanador a R$ 30,00
por dia. Faça um programa que solicite o número de
dias trabalhados pelo encanador e imprima a
quantia líquida que deverá ser paga, sabendo-se
que são descontados 8% para imposto de renda.
*/
int main(){

   float valor;  int dias;  const float diaria = 30;

   printf("Digite o numero de dias trabalhados: ");
   scanf("%i",&dias);

    valor = diaria * dias;
    valor = valor - 0.08*valor;

    printf("O valor pago foi, R$ = %0.2f\n",valor);

   return 0;
}
