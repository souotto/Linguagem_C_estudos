#include<stdio.h>
/*
1. A importância de R$ 780.000,00 será dividida entre três
ganhadores de um concurso. Sendo que da quantia total:
a. O primeiro ganhador receberá 46%;
b. O segundo receberá 32%;
c. O terceiro receberá o restante;
■ Calcule e imprima a quantia ganha por cada um dos
ganhadores.
*/
int main(){

   float premio=780000, primeiro = 46, segundo = 32, terceiro,Soma;

   terceiro = 100-(primeiro+segundo); //aqui determina qual o restante de 100%.
   Soma = primeiro+segundo+terceiro;
   primeiro = (primeiro/Soma)*premio;
   segundo = (segundo/Soma)*premio;
   terceiro = (terceiro/Soma)*premio;

   printf("O primeiro ganhador receberá R$ %0.2f\n",primeiro);
   printf("O segundo receberá R$ %0.2f\n",segundo);
   printf("O terceiro receberá R$ %0.2f\n",terceiro);

   return 0; 
}
