#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code,quantity;
    float total;
    float ar[5]={4.00,4.50,5.00,2.00,1.50};

    scanf("%d %d",&code,&quantity);
    total=ar[code-1]*quantity;

    printf("Total: R$ %.2f\n",total);

    return 0;
}
