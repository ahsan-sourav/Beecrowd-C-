#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[110];
    int i,j,k,test,count;
    scanf("%d",&test);

    for(k=0;k<test;k++){
        scanf("%s",str);
        count=0;
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='<'){
                for(j=i;str[j]!='\0';j++){
                    if(str[j]=='>'){
                        str[j]=',';
                        count++;
                        break;
                    }
                }
            }
        }
        printf("%d\n",count);
        memset(str,'0',sizeof str);
    }

    return 0;
}
