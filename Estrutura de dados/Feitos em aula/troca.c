#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocap(int *px, int *py){
    int aux = *px;
    *px = *py;
    *py = aux;
}

void trocav(int x, int y){
    int aux = x;
    x = y;
    y = aux;
}

void main(){
        int a  = 1, b = 2;
        printf("a = %d\tb = %d\n", a, b);
        trocav(a, b);
        printf("a = %d\tb = %d\n", a, b);
        trocap(&a, &b);
        printf("a = %d\tb = %d\n", a, b);
}
