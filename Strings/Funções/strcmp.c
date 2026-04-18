#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Hello";
    char s2[] = "world";
   
    //strcmp compara se as strings são iguais, se forem igual ela retorna null, se forem diferentes ela retorna (core dumped)
    printf("o retorno de strcmp é: %s\n", strcmp(s1,s2));
}