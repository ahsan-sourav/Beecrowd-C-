#include <stdio.h>
#include <stdlib.h>

int main()
{
   double salary,bonus,total;
   char name;

     scanf("%s%lf%lf",&name,&salary,&bonus);  //char ar input dite %s use kora hoy...

        total=salary+(bonus*.15);

     printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
