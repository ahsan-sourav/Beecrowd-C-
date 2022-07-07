#include <stdio.h>
#include <string.h>
#define N 2001

int main()
{
    int t,n,i,j,array[N];
        while(scanf("%d",&t)==1){
            memset(array,0,sizeof array);
                for(i=1;i<=t;i++){
                    scanf("%d",&n);
                    array[n]++;
                }
                for(i=0;i<N;i++)
                for(j=0;j<array[i];j++){
                    if(array[i]>0)
                        printf("%d aparece %d vez(es)\n",i,array[i]);
                        break;
                }
        }

    return 0;
}
