#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _end endereco
;

struct _end {

    char *logradouro;
    int numero;
    char *cep;
    char *bairro;
    char *cidade;
    char *uf;

};

typedef struct {

    char logradouro[50];
    int numero;
    char cep[11];
    char bairro[30];
    char cidade[30];
    char uf[2];

} endereco2;

void main() {

    endereco e1, e2;
    e1.logradouro = "Rua dos bobos";
    e1.numero = 0;
    e1.cep = "11.111-111";
    e1.bairro = "Testinho";
    e1.cidade = "Martinslandia";
    e1.uf = "FA";
    //e2.logradouro = e1.logradouro; //esta passando o endereco, esta alocando a memória
    e2.logradouro = (char *) malloc(strlen(e1.logradouro) + 1); //+1 para alocar o \0
    strcpy(e2.logradouro, e1.logradouro); //copiando o valor do e1 para o e2

    e2.numero = e1.numero;

    e2.cep = (char *) malloc(strlen(e1.cep) + 1); //+1 para alocar o \0
    strcpy(e2.cep, e1.cep); //copiando o valor do e1 para o e2

    e2.bairro = (char *) malloc(strlen(e1.bairro) + 1); //+1 para alocar o \0
    strcpy(e2.bairro, e1.bairro); //copiando o valor do e1 para o e2

    e2.cidade = (char *) malloc(strlen(e1.cidade) + 1); //+1 para alocar o \0
    strcpy(e2.cidade, e1.cidade); //copiando o valor do e1 para o e2

    e2.uf = (char *) malloc(strlen(e1.uf) + 1); //+1 para alocar o \0
    strcpy(e2.uf, e1.uf); //copiando o valor do e1 para o e2



    endereco2 ee1, ee2;
    strcpy(ee1.logradouro, "Rua dos espertos"); // nao precisa de malloc pq os valores ja estao pre alocados
    ee1.numero = 1;
    strcpy(ee1.cep, "22.222-222");
    strcpy(ee1.bairro, "Scrum");
    strcpy(ee1.cidade, "Serginholandia");
    strcpy(ee1.uf, "FA");

//    strcpy(ee2.logradouro, ee1.logradouro); // nao precisa de malloc pq os valores ja estao pre alocados
//    ee2.numero = ee1.numero;
//    strcpy(ee2.cep, ee2.cep);
//    strcpy(ee2.bairro, ee2.bairro);
//    strcpy(ee2.cidade, ee1.cidade);
//    strcpy(ee2.uf, ee1.uf);

    memcpy(&ee2, &ee1, sizeof(ee1)); //faz a mesma coisa do que foi comentado acima, copia os dados de e1 pra e2


}
