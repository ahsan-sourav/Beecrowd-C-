#include <stdio.h>
#include <string.h>

int main()
{
    int hits[1000],i,testcase,number,count=0;
    char position[10000];

    scanf("%d",&testcase);

    while(testcase--){
        count=0;
        scanf("%d",&number);
        for(i=0;i<number;i++){
            scanf("%d",&hits[i]);
        }
        scanf("%s",&position);

        for(i=0;i<number;i++){
            if(hits[i]>0 && hits[i]<=2 && position[i]=='S'){
                count++;
            }
            else if(hits[i]>2 && position[i]=='J'){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
