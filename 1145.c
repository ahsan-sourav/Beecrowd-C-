#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,a,b=0;
    scanf("%d%d",&x,&y);

    for(a=1; a<=y; a++){
        b++;
        if(b==x) printf("%d",a);
        else printf("%d",a);
        if(b==x){
            b=0;
            printf("\n");
        }
    }
    return 0;
}
