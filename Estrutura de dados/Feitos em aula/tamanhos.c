#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ACABOU 0                                         //define é uma forma de apelidar o comando
#define IMPRIMIR printf


int main (){

    int n;
    IMPRIMIR("Tamanho de char: %u\n", sizeof(char));    //sizeof é pra pegar tamanho
    printf("Tamanho de n: %u\n", sizeof(n));            //%u imprime decimal sem sinal
    IMPRIMIR("Tamanho de long: %u\n", sizeof(long));
    printf("Tamanho de long long: %u\n", sizeof(long long));


    return ACABOU;

}
