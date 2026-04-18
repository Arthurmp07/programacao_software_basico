#include <stdio.h>
#include <string.h>

int main(){
char s1[] = "Hello";
char s2[] = "Wolrd";


//strchr busca onde foi a primeira aparição do caracter escolido na string e retorna o que tiver depois do carater incluindo o próprio caracter
char *searchchar1 = strchr(s1, 'e');
printf("Esta é a primeira ocorrência de e na string 1: %s\n", searchchar1);

char *searchchar2 = strchr(s2, 'r');
printf("Esta é a primeira ocorrência de r na string 2: %s\n", searchchar2);



}
