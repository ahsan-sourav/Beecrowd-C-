#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);

    for(b=1;b<=a;b++){
        c=b*b;
        d=b*b*b;

        printf("%d %d %d\n",b,c,d);
    }

    return 0;
}
