#include <stdio.h>
/*
12. Calculo de IMC
Então, a fórmula fica assim: IMC = Peso / Altura².
*/
int main()
{
  float imc, h, peso;

   printf("Altura ---> \n");
   scanf("%f",&h);
   printf("Peso   ---> \n");
   scanf("%f",&peso);

    imc = peso / (h*h);

   if(imc < 18.5)
      printf("Abaixo de peso\n");
   else
      if(imc >=18.6 && imc <=24.9)
        printf("Saudavel\n");
   else
      if(imc >=25 && imc <=29.9)
        printf("Peso em excesso\n");
   else
      if(imc >=30.0 && imc <=34.9)
        printf("Obesidade Grau 1\n");
   else
      if(imc >=35.0 && imc <= 39.9)
        printf("Obesidade grau 2(severa)\n");
   else
      if(imc >= 40)
        printf("Obesidade Grau 3(mórbida)");
  return 0;
}
