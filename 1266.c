#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i,n,number,zero,sum,meter,in,post;

    while(true){
        scanf("%d",&n);
        if(n == 0) break;
        in = 0;
        zero = 0;
        sum = 0;
        post = 0;
        for(i=0;i<n;i++){
            scanf("%d",&number);
            if(number == 0 && in == 0){
                post++;
                zero++;
            }
            else if(number == 0 && in == 1){
                post++;
            }
            if(number == 1){
                in = 1;
                sum += post/2;
                post = 0;
            }
        }
        if(post > 0){
            sum -= zero/2;
            post += zero;
            sum += post/2;
        }
        printf("%d\n",sum);
    }


    return 0;
}
