#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    float p1;
    float p2;
    float trab;
};

int main(){

    struct aluno aluno1, aluno2, aluno3;

    strcpy(aluno1.nome, "Arthur");

    aluno1.p1 = 10;
    aluno1.p2 = 7.5;
    aluno1.trab = 8;

    aluno2.p1 = 6.5;
    aluno2.p2 = 4.8;
    aluno2.trab = 7;

    printf("Aluno: %s\n", aluno1.nome);
    printf("P1: %.1f\n", aluno1.p1);
    printf("P2: %.1f\n", aluno1.p2);
    printf("Trabalho: %.1f\n", aluno1.trab);

    return 0;
}