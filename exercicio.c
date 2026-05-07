#include <stdio.h>
#include <stdlib.h>

// Define funções para manipulação de bits

unsigned int setbit(unsigned int x, int bit) {
    return x | (1U << bit);
}

// // Limpa o bit "bit" em x (coloca em 0)
// unsigned int clearbit(unsigned int x, int bit) {
//     return x & ~(1U << bit);
// }

unsigned int invertbit(unsigned int x, int bit) {
    return x ^ (1U << bit);
}

int testbit(unsigned int x, int bit) {
    return (x & (1U << bit)) != 0;
}

int main() {
    unsigned int var;

    var = 254;
    // var = 0x0000000FE; // 254
    // var = 0b11111110; //254

    printf("Cor original : %08X\n", var);

    var = ~var;
    printf("Inverted: %08X\n", var);

    var = setbit(var, 3);
    printf("after bit 3 was set: %08X\n", var);

    // var = clearbit(var, 31);
    // printf("after bit 31 was reset: %08X\n", var);

    var = invertbit(var, 31);
    printf("after bit 31 was inverted: %08X\n", var);

    if (testbit(var, 6))
        printf("bit 6 is set\n");
    else
        printf("bit 6 is clear\n");

    printf("\nTesting sizeof: \n\n");

    printf("size(int)   = %lu\n", sizeof(int));
    printf("size(char)  = %lu\n", sizeof(char));
    printf("size(short) = %lu\n", sizeof(short));
    printf("size(long)  = %lu\n", sizeof(long));
    printf("size(float) = %lu\n", sizeof(float));
    printf("size(double)= %lu\n", sizeof(double));

    return 0;
}
