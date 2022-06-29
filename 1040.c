#include <stdio.h>

int main()
{
     float a,b,c,d,e;
     double avg,avrg;
     scanf("%f %f %f %f",&a,&b,&c,&d);

     avg = ((a*2)+(b*3)+(c*4)+d)/10;
     printf("Media: %.1lf\n",avg);

     if(avg<5.0){
        printf("Aluno reprovado.\n");
     }
    else if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1lf\n",e);

        avrg = (avg+e)/2;
        if(avrg>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avrg);
    }

    return 0;

}
