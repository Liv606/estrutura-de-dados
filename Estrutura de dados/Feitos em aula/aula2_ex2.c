#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){

    char *q = "Livia";
    char s[100];
    //strcpy(s, "Livia");
    memset(s, 1, sizeof(s));       //vai limpar
    for(int i = 0; i < strlen (q); i++){
        printf("%c\n", q[i]);
        s[i] = q[i];
    }
    s[0] = 'L';
    s[1] = 'i';
    s[2] = 'v';
    s[3] = '\0';
    printf("%u\n", strlen(s));
    printf("%s\n", s);

    printf("%c\t%u\n", s[0],  s[1]);
    int m[2][3][5];
    printf("%u\n", sizeof(m));
    printf("%u\n", &m[0][0][0]);
    printf("%u\n", &m[0][0][1]);
    printf("%u\n", &m[0][1][0]);
}

