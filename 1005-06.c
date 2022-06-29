#include <stdio.h>
#include <stdlib.h>
//        Average 1
// A has weight 3.5 and B has weight 7.5
/*int main()
{
    float a,b;
    scanf("%f%f",&a,&b);

    printf("MEDIA = %.5f\n",(3.5*a + 7.5*b)/(3.5+7.5));

    return 0;
}*/

//       Average 2
//A has weight 2, grade B has weight 3 and the grade C has weight 5
int main()
{
    double a,b,c,media;
    scanf("%lf%lf%lf",&a,&b,&c);

    media = (a/10*2)+(b/10*3)+(c/10*5);

    printf("MEDIA = %.1lf\n",media);

    return 0;
}
