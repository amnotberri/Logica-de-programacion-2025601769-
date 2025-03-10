#include <stdio.h>
#include <math.h>

int main() {
    double l, pt, at, pi;

    // Asignar valores
    l = 7; 
    pi = M_PI; 

    // Calcular el área (at)
    at = ((pi * pow((3 * l) / 2, 2)) / 2) + (2 * (l * (3 * l))) + (l * (3 * l));

    // Calcular el perímetro (pt)
    pt= l*(7+2*sqrt(10)+1.5*pi);

    // Imprimir el resultado 
    printf("El area es: %f\n", at);
    printf("El perimetro es: %f\n", pt);

    return 0;
}