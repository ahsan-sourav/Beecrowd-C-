#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);

    if(x>y){
        int t=x; x=y; y=t;
    }
    for(i=x+1; i<y; i++){
        int r = i%5;
        if(r==2 || r==3)
            printf("%d\n",i);
    }

    return 0;
}
