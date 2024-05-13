#include <stdio.h>


int main() {
    float a, b, c;
    
    printf("Ingrese los n?meros a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float menor = menorDeTres(a, b, c);
    printf("El menor es: %g\n", menor);
    
    return 0;
}


float menorDeTres(float a, float b, float c) {
    float menor;

    if (a < b)
        if (a < c)
            menor = a;
        else
            menor = c;
    else
        if (b < c)
            menor = b;
        else
            menor = c;

    return menor;
}
