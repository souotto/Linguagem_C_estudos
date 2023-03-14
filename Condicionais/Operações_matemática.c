#include <stdio.h>
/*
7. Faça um programa que mostre ao usuário um menu com 4 opções de
operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das
opções e o seu programa então pede dois valores numéricos e realiza a
operação, mostrando o resultado e saindo.
*/
int main()

{
    float valor1, valor2, resp;
    char opcao;

    printf("Escolha qual operacao aritmetica fazer\n");
    printf("[+]  [-]  [/]  [*]\n");
    scanf("%c",&opcao);
    if(opcao=='+' || opcao=='-' || opcao=='/' || opcao=='*'){
    printf("Digite os dois valores --> ");
    scanf("%f%f",&valor1,&valor2);
    }

    switch(opcao){
       case '+':
           resp = valor1+valor2;
           break;
       case '-':
           resp = valor1-valor2;
           break;
        case '/':
            resp = valor1/valor2;
           break;
         case '*':
            resp = valor1*valor2;
           break;
       default:
           printf("Invalido\n");
    }
        if(opcao=='+' || opcao=='-' || opcao=='/' || opcao=='*')
        printf("resultado = %0.2f\n",resp);

    return 0;
}
