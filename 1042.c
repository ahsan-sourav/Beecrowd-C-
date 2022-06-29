#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,j,k,hold;
    scanf("%d%d%d",&a,&b,&c);
    i=a;
    j=b;
    k=c;

    if(a>b){
        hold=a;a=b;b=hold;
    }
    if(a>c){
        hold=a;a=c;c=hold;
    }
    if(b>c){
        hold=b;b=c;c=hold;
    }

    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",i,j,k);

    return 0;
}
