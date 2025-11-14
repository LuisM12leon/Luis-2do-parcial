#include<stdio.h>

main() {
    int valorIngresado;
    int cuadradoCalc;

    printf("Ingresa un numero \n");
    scanf("%d", &valorIngresado);

    cuadradoCalc = valorIngresado * valorIngresado;

    printf("El cuadrado del numero es: %d", cuadradoCalc);
}

