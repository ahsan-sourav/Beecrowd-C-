#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float S=0,j=1;

    for(i=1; i<39; i+=2){
        S=S+(i/j);
        j=j+j;
    }

    printf("%.2lf\n",S);

    return 0;
}
