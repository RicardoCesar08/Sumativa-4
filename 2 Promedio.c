#include <stdio.h>
#include <stdlib.h>

/*Elaborar una aplicación de línea de comandos en C que calcule el promedio de las ventas diarias (lunes a viernes)
de los tres vendedores que tiene la empresa NASA (Nutrición Animal S.A.).*/

int main()
{
    /*obtencion de datos*/

    float vendor1 [5];
    float vendor2 [5];
    float vendor3 [5];
    int a;
    printf("ingrese las ventas de Lunes a Viernes presionando enter\n");
    printf("ventas del vendedor 1 \n");
    for(a=0; a<5; a++){
     scanf("%f", &vendor1[a]);
     }
    printf("ventas del vendedor 2 \n");
    for(a=0; a<5; a++){
     scanf("%f", &vendor2[a]);
     }
    printf("ventas del vendedor 3 \n");
    for(a=0; a<5; a++){
     scanf("%f", &vendor3[a]);
     }



/*promedio del vendedor 1*/

    float vendor1total1;
    for(int a=0; a<5; a++){
     vendor1total1 += vendor1[a];
     }
     float vendorpromedio1 = vendor1total1/5;
     printf("el promedio del vendedor 1 es de: %f \n", vendorpromedio1);



/*promedio del vendedor 1*/

    float vendor1total2;
    for(int a=0; a<5; a++){
     vendor1total2 += vendor2[a];
     }
     float vendorpromedio2 = vendor1total2/5;
     printf("el promedio del vendedor 2 es de: %f \n", vendorpromedio2);



/*promedio del vendedor 1*/

    float vendor1total3;
    for(int a=0; a<5; a++){
     vendor1total3 += vendor3[a];
     }
     float vendorpromedio3 = vendor1total3/5;
     printf("el promedio del vendedor 3 es de: %f\n", vendorpromedio3);



/*Promedio semanal de la tienda*/

    float promediotienda= (vendorpromedio1+vendorpromedio2+vendorpromedio3)/3;
    printf("el promedio total de la tienda es de: %f\n", promediotienda);
    return 0;
}
