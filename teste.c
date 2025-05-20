#include <stdio.h>

typedef struct{
    int id;
    char nome[20];
    int numero_telefone[10];
}Contato;

int main (){
    Contato telefone;

    printf ("Digite seu nome: ");
    scanf ("%s", telefone.nome);

    return 0;
}