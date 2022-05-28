#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    int i = 1000;
    unsigned char uc;
    int *p;                                             //int* p(todos são ponteiros) ; int *p(só p é ponteiro)
    double *pd, d;
    char *pc;
    printf("Valor de p: %u\n", p);
    printf("Tamanho de p: %u\n", sizeof(p));
    printf("Tamanho de pd: %u\n", sizeof(pd));
    p = &i;
    *p = 2000;
    printf("Valor de p: %u\n", p);
    printf("Endereco de i: %u\n", &i);                     //&i (endereço de i)
    printf("Valor de i: %u\n", i);
    printf("Valor de i(atraves de p): %u\n", *p);
    printf("Valor de i(atraves de p): %u\n", *(&i));
    p++;                                                    //ele pula 4 bytes
    printf("Valor de p: %u\n", p);
    pd = &d;
    printf("Valor de pd: %u\n", pd);
    pd++;                                                     //ele pula 8 bytes pq é double
    printf("Valor de pd: %u\n", pd);
    pc = &i;
    printf("Valor de pc: %u\n", pc);
    for(int j = 0; j < 4000; j++){
        uc = *pc;
        printf("Valor apontado por pc: %c\n", uc);
        pc++;
    }
}
