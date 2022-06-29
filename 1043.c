#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    if(a+b>c && b+c>a && a+c>b){
         printf("Perimetro = %.1lf\n",a+b+c);
    }
    else {
        printf("Area = %.1lf\n",((a+b)*c)/2);
    }

    return 0;
}
