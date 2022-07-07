#include <stdio.h>
#include <math.h>

#define true 1
#define false 0

int main()
{
    float d,vg,vf;

    while(scanf("%f %f %f",&d,&vf,&vg)!=EOF){
        float dist = sqrt(144 + d*d);
        float tf = 12/vf;
        float tg = dist/vg;

        printf("%c\n",tg <= tf ? 'S':'N');
    }

    return 0;
}
