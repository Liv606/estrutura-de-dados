#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int mil = 1000;
    char *nome = "Livia";
    printf("Hello World, %s, %d\n%d", nome, mil, mil); // o %d é o que vai ser substituído pelo valor mil, e o %s pelo nome(tem que colocar na ordem de aparição), \n pula linha
    return 0; // como é int ele precisa retorntar algo, entao coloca 0 pra não retornar nada

}

