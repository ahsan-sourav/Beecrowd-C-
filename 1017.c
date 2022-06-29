#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    double fuel;

    scanf("%d%d",&a,&b);
      fuel=(a*b)/12.0;

    printf("%.3lf\n",fuel);

    return 0;
}
