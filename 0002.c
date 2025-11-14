#include<stdio.h>

main() {
    float rCilindro;
    float hCilindro;
    float valorPi;
    float areaTotal;
    float volumenTotal;

    printf("Ingresa el radio \n");
    scanf("%f", &rCilindro);

    printf("Ingresa la altura \n");
    scanf("%f", &hCilindro);

    printf("Ingresa el valor que ocuparas para pi \n");
    scanf("%f", &valorPi);

    areaTotal = 2 * (valorPi * rCilindro * hCilindro) + 2 * (valorPi * (rCilindro * rCilindro));
    volumenTotal = (valorPi * (rCilindro * rCilindro) * hCilindro);

    printf("El area es de: %.2f \n", areaTotal);
    printf("El volumen es de: %.2f \n", volumenTotal);
}


