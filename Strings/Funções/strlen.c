#include <stdio.h> 
#include <string.h>

int main(){
   char s1[] = "Hello";
   char s2[] = "World";
   //retorna o tamanho da string
   //OBS: Cuidar para colocar a strlen dentro de outra variavel antes de imprimir, se não o que será impresso será o endereço de memória, não o tamanho da string
   int tam1 = strlen(s1);
   printf("O tamanho de s1 é: %d\n", tam1);
   int tam2 = strlen(s2);
   printf("O tamanho de s2 é: %d\n", tam2);
   
}