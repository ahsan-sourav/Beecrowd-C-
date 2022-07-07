#include <stdio.h>
#include <math.h>

int num(long long number)
{
    int digits = 0;

    while(number){
        number /= 10;
        digits++;
    }

    return digits;

}

int main()
{
    int i,n;
    long long x,y,value,z;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lld %lld",&x,&y);
        z = num(y);
        z = ceil(pow(10,z));
        value = x%z;
        printf("%s\n",(value == y)? "encaixa":"nao encaixa");
    }
    return 0;
}
