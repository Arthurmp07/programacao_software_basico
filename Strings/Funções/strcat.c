#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Hello";
    char s2[] = "World";
    //strcat concatena a string um com a string dois, fazendo neste caso HelloWorld
    strcat(s1,s2);
    printf("Esta é s1 e s2 concatenado com strcat: %s\n", s1);
}