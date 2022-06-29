#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,tringle,circle,trapezium,square,rectangle;  // c is hight for tringle & radius for circle

    scanf("%lf%lf%lf",&a,&b,&c);

        tringle=0.5*a*c;
        circle=3.14159*c*c;
        trapezium=((a+b)*c)/2;
        square=b*b;
        rectangle=a*b;

    printf("TRIANGULO: %.3lf\n",tringle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);

    return 0;
}
