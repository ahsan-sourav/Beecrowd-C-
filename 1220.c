#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,input,real,a[1000];
    double sum=0, s=0, x, sum2=0;

    while((scanf("%d",&n)) && n){
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d.%d",&input,&real);
            a[i] = input*100+real;
            sum += a[i];
        }
        x=((double)sum)/n;
        s=0;
        sum2=0;
        for(i=0;i<n;i++){
            if(a[i]<x){
                s+=(int)(x-a[i])/100.0;
            }
            else{
                sum2+=(int)(a[i]-x)/100.0;
            }
        }
        if(s>sum2){
            printf("$%.2lf\n",s);
        }
        else printf("$%.2lf\n",sum2);
    }

    return 0;
}
