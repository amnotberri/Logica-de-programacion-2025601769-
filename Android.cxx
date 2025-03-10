#include <stdio.h>
#include <math.h>

int main() {
    double L, pi, at, pt;
    
    L = 7;
    pi = 3.1416;
    
at = (pi * pow(L / 2.0, 2) / 2.0) + pow(L, 2) + 2 * pow(L / 5.0, 2) + 2 * ((3 * L / 5.0) * (L / 5.0));

    pt = (pi * (L / 2.0)) + (2 * L) + (2 * L) + (3 * (L / 5.0));
    
    // Imprimir resultados
    printf("El area total es: %.4f\n", at);
    printf("El perimetro total es: %.4f\n", pt);

    return 0;
}