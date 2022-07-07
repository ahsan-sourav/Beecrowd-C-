#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,p,proc,clock;
    char str[51];

    while(scanf("%[^\n]%*c",&str)!=EOF){
        scanf("%d%*c",&p);
        proc=clock=0;

        for(i=0;str[i]!='\0';i++){
            if(str[i]=='W'){
                clock++;
                if(proc>0){
                    proc=0;
                    clock++;
                }
            }
            else{
                proc++;
                if(proc==p){
                    clock++;
                    proc=0;
                }
            }
        }
        if(proc>0)clock++;
        printf("%d\n",clock);
    }

    return 0;
}
