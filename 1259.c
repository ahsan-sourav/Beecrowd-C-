#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ascending(void const *a, void const *b)
{
    return ( *(int*)a - *(int*)b );

}

int descending(void const *a, void const *b)
{
    return ( *(int*)b - *(int*)a );

}

int main()
{
    int i,n,num,pair,impair;

    scanf("%d",&n);
    pair = 0;
    impair = 0;
    int np[n];
    int ni[n];

    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num%2 == 0){
            np[pair] = num;
            pair++;
        }
        else{
            ni[impair] = num;
            impair++;
        }
    }
    qsort(np,pair,sizeof(int),ascending);
    qsort(ni,impair,sizeof(int),descending);

    for(i=0;i<pair;i++){
        printf("%d\n",np[i]);
    }
    for(i=0;i<impair;i++){
        printf("%d\n",ni[i]);
    }

    return 0;
}
