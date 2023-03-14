#include <stdio.h>
#include <string.h>

void divide (char str[], char p1[], char p2[]){
    int meio = strlen(str)/2;
    int i;
    for (i=0; i<meio; i++){ // de 0 ate metade de str fica em p1
        p1[i] = str[i];
    }
    int j=0; // utilizando j para comecar no inicio de p2
    for (i=meio; i<(strlen(str)+1); i++){ // do meio ate o final de str, fica em p2 (+1 para pegar tambem o '\0')
        p2[j] = str[i];
        j++;
    }
}

int main() {
    char str[11]; // 10 caracteres + '\0'
    char parte1[6], parte2[6];
    printf ("Insira uma string de até 10 caracteres: ");
    setbuf(stdin, NULL);
    fgets(str, 11, stdin);

    divide(str, parte1, parte2);
    printf(" %s %s ",parte1, parte2);

    return 0;
}




