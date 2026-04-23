#include <stdio.h>

struct fracao_s {
    float numerador;
    float denominador;
};

typedef struct fracao_s Fracao;

float calcula(Fracao frac) {
    return frac.numerador / frac.denominador;
}

Fracao soma(Fracao f1, Fracao f2) {
    Fracao resultado;
    resultado.numerador = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}

Fracao multiplicacao(Fracao f1, Fracao f2) {
    Fracao resultado;
    resultado.numerador = f1.numerador * f2.numerador;
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}

int main() {
    Fracao f1, f2, res;

    f1.numerador = 10.5;
    f1.denominador = 2.5;

    f2.numerador = 3;
    f2.denominador = 4;

    printf("Valor f1: %f\n", calcula(f1));
    printf("Valor f2: %f\n", calcula(f2));

    res = soma(f1, f2);
    printf("Soma: %f/%f = %f\n", res.numerador, res.denominador, calcula(res));

    res = multiplicacao(f1, f2);
    printf("Multiplicacao: %f/%f = %f\n", res.numerador, res.denominador, calcula(res));

    return 0;
}
