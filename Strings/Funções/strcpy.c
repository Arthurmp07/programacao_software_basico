#include <stdio.h>
#include <string.h>


int main(){

    char s1[] = "Hello";
    char s2[] = "World";
    //strcpy copia a s2 dentro da s1, substituindo a outra string
    strcpy(s1, s2);
    printf("Isto é a s2 substituindo s1 usando strcpy: %s\n", s1);
}