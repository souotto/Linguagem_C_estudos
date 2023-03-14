#include <stdio.h>
#include <string.h>

int main(){
//7. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o
//nome da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”

  char sexo;
  char nome[30];
  int idade;

  printf("Digite seu nome -- ");
  fgets(nome, 30 ,stdin);

  printf("genero -- feminino [f] -- masculino [m] --> ");
  scanf("%c",&sexo);
  printf("Digite sua idade\n");
  scanf("%d",&idade);
  // printf("genero -- feminino [f] -- masculino [m] --> ");
  //  scanf("%c",&sexo);

    if((sexo == 'f') && (idade<25))
      printf(" nome -- %s -- ACEITA -- ",nome);

    else
      // if((idade>=25) && (sexo != 'f'))
      printf("NAO ACEITA\n");

  return 0;
}
