#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,R;

    scanf("%lf\n",&R); //%lF when data type is double

    A = 3.14159*R*R;

  printf("A=%.4lf\n");  //%.4lf means 4 digits after point

  return 0;
}
