#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int mil = 1000;
    char *nome = "Livia";
    printf("Hello World, %s, %d\n%d", nome, mil, mil); // o %d � o que vai ser substitu�do pelo valor mil, e o %s pelo nome(tem que colocar na ordem de apari��o), \n pula linha
    return 0; // como � int ele precisa retorntar algo, entao coloca 0 pra n�o retornar nada

}

