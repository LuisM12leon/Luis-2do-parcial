#include<stdio.h>

main() {
    float valorA;
    float valorB;
    float valorC;
    float productoFinal;

    printf("Ingresa el primer numero \n");
    scanf("%f", &valorA);

    printf("Ingresa el segundo numero \n");
    scanf("%f", &valorB);

    printf("Ingresa el tercer numero \n");
    scanf("%f", &valorC);

    productoFinal = valorA * valorB * valorC;

    printf("El resultado es: %.2f", productoFinal);
}


