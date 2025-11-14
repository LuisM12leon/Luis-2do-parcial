#include<stdio.h>

main() {
    float medidaBase;
    float medidaAltura;
    float valorPerimetro;
    float valorArea;

    printf("Ingresa la base \n");
    scanf("%f", &medidaBase);

    printf("Ingresa la altura \n");
    scanf("%f", &medidaAltura);

    valorPerimetro = (medidaBase + medidaAltura) * 2;
    valorArea = (medidaBase * medidaAltura) / 2;

    printf("El perimetro es de: %.2f \n", valorPerimetro);
    pri


