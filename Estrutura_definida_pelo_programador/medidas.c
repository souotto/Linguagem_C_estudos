#include <stdio.h>

struct medidas {
    int x, h;
};

struct medidas soma (struct medidas a, struct medidas b){
    struct medidas c;
    c.x = a.x + b.x;
    c.h = a.h + b.h;
    return c;
}

int main() {
    struct medidas m1 = {12, 15};
    struct medidas m2 = {1, 16};
    /* Receber medidas do usuario
    struct medidas m1, m2;
    printf("Insira as medidas de m1: ");
    scanf("%d %d", &m1.x, &m1.h);
    printf("Insira as medidas de m2: ");
    scanf("%d %d", &m2.x, &m2.h);
    */
    struct medidas m3 = soma(m1, m2);
    printf("x: %d \nh: %d", m3.x, m3.h);
    
    return 0;
}
