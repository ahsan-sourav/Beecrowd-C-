#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;     // X= distance
    double Y,total; // Y= spent fule

    scanf("%d %lf",&X,&Y);
        total = X/Y;

    printf("%.3lf km/l\n",total);

    return 0;
}
