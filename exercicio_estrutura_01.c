/**************************************************************
  (comment in Portuguese)
    Crie um programa que contenha uma estrutura
    chamada medidas, com dois atributos inteiros x e h. O
    programa deve conter uma função que recebe duas
    variáveis do tipo estrutura medidas e retorne uma
    terceira variável do mesmo tipo com as somas de x e h.
****************************************************************/

#include <stdio.h>

struct measure{
    int x, h;
};
struct measure sum(struct measure a, struct measure b){
    struct measure c;
		c.x = a.x + b.x;
		c.h = a.h + b.h;
		return c;
};
int main(){
		struct measure m1 = {12, 15};
		struct measure m2 = {1, 16};
		struct measure m3 = sum(m1, m2);

		printf("x: %d\n",m3.x);
		printf("h: %d", m3.h);

    return 0;
}
