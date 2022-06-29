#include <stdio.h>
#include <stdlib.h>

int survivor(int n,int k)
{
    int i,tnk=0;

    for(i=1;i<n;++i)
        tnk=(tnk+k)%i;

    return tnk;
}

int main()
{
    int n,k;

    while(1){
        scanf("%d",&n);
        if(!n)
            break;
        k=1;
        while(survivor(n,k)+2!=13)
            ++k;

        printf("%d\n",k);
    }

    return 0;
}
