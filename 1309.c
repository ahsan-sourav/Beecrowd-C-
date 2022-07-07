#include <stdio.h>
#include <string.h>

int main(void)
{
    int v,c,d,i,t;
    char b[15];

    while(scanf("%d%d",&v,&c)== 2){
        sprintf(b,"%d",v);
        t = strlen(b);
        d = t%3;
        d = (d == 0) ? 2:d-1;
        printf("$");

        for(i=0;i<t;++i){
            printf("%c",b[i]);
            if(i == d && i != t-1){
                printf(",");
                d += 3;
            }
        }
        printf(".");
        printf("%02d\n",c);
    }

    return 0;
}
