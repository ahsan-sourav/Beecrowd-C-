#include <stdio.h>
#include <stdlib.h>

int josephusloop(int n,int k,int startingPoint)
{
    if(n==1) return 1;

    int newSp,survivor;
    newSp = (startingPoint+k-2)%n+1;
    survivor = josephusloop(n-1,k,newSp);

    if(survivor<newSp){
        return survivor;
    } else{
        return survivor+1;
        }
}

int josephus(int n,int k){
    return josephusloop(n,k,1);
}

int main()
{
    int nc,n,k,s,i;
    scanf("%i",&nc);

    for(i=1; i<=nc; ++i){
        scanf("%i %i",&n,&k);
        s = josephus(n,k);
        printf("Case %i: %i\n",i,s);
    }

    return 0;
}
