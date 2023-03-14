#include<stdio.h>
#define valorDePI 3.14
/*
Questão 3
● Leia um ângulo em graus e apresente-o convertido
em radianos. A fórmula de conversão é: R = G ∗
π/180, sendo G o ângulo em graus e R em radianos
e π = 3.14.
*/
int main(){

   float angulo, radianos;

   printf("Digite qual o angulo: ");
   scanf("%f",&angulo);

   radianos = angulo * (valorDePI / 180);

   printf("O valor em Radianos --> %0.2f\n",radianos);

   return 0;
}
