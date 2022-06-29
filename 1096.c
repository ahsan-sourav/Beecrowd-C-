#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j;

    for(i=1; i<10; i=i+2){
        for(j=7; j>=5; j--){
            printf("I=%d J=%d\n",i,j);
        }
    }

    return 0;
}
