#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Hello World";
    char s2[] = "World";

    //strstr procura uma string dentro de outra string, retornando a string que estava sendo procurado caso seja encontrada
    char *searchword = strstr(s1, s2);
    printf("Este é a string encontrada dentro da outra string: %s\n", searchword);
}