#include<stdio.h>
#include<stdlib.h>
/*
10. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%;
RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o
estado destino do produto e o programa retorne o preço ﬁnal do produto
acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrar uma mensagem de erro.
*/
int main(){

   float valor; const float mg=0.07, sp=0.12, rj=0.15, ms=0.08;
   char opcao;

   printf("--Escolha a opcao de acordo com o Estado de destino\n");
   printf("--[1]-- MG\n");
   printf("--[2]-- SP\n");
   printf("--[3]-- RJ\n");
   printf("--[4]-- MS\n");
   scanf("%c",&opcao);
   if(opcao=='1'||opcao=='2'||opcao=='3'||opcao=='4'){
   printf("Qual o valor R$ do produto, por favor --> ");
   scanf("%f",&valor);
   }
   switch(opcao){
        case '1': valor = valor*mg + valor;
           break;
        case '2': valor = valor*sp +valor;
           break;
        case '3': valor = valor*rj +valor;
           break;
        case '4': valor = valor*ms +valor;
           break;
        default:
           printf("opcao ---> erro\n");
           break;
   }
        if(opcao=='1'||opcao=='2'||opcao=='3'||opcao=='4')
           printf("Valor final do produto = %0.2f\n",valor);
   return 0;
}
