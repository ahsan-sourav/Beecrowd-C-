#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long long int m,n,tmp,tmp1;

    while(scanf("%lld%lld",&m,&n) !=EOF){
        tmp=1;
        tmp1=1;

        for(i=m;i>0;--i){
            tmp *= m;
            m--;
        }
        for(i=n;i>0;--i){
            tmp1 *= n;
            n--;
        }
        printf("%lld\n",tmp+tmp1);
    }
    return 0;
}
