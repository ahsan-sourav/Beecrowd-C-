#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,j,k=0,x,y;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d%d",&x,&y);
        if(x%2==0) x++;

        for(j=0; j<y; j++){
            k+=x;
            x+=2;;
        }
        printf("%d\n",k);
        k=0;
    }

    return 0;
}
