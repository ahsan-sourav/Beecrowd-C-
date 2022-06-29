#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double a,b,c,avg;

    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);

        avg=((a/10)*2)+((b/10)*3)+((c/10)*5);
        printf("%.1lf\n",avg);
    }
    return 0;
}
