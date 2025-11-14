#include<stdio.h>

main() {
    float radioFig;
    float alturaFig;
    float constantePi;
    float resultadoArea;
    float resultadoVol;

    printf("Ingresa el radio \n");
    scanf("%f", &radioFig);

    printf("Ingresa la altura \n");
    scanf("%f", &alturaFig);

    printf("Ingresa el valor que ocuparas para pi \n");
    scanf("%f", &constantePi);

    resultadoArea = 2 * (constantePi * radioFig * alturaFig) + 2 * (constantePi * (radioFig * radioFig));
    resultadoVol = (constantePi * (radioFig * radioFig) * alturaFig);

    printf("El area es de: %.2f \n", resultadoArea);
    printf("El volumen es de: %.2f \n", resultadoVol);
}




