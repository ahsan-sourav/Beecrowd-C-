#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x=0,y,X,c;

    for(i=0; i<100; i++){
        scanf("%d",&X);
        if(X==2002) printf("Acesso Permitido\n");
            else  printf("Senha Invalida\n");
            if(X==2002) break;
    }

    return 0;
}
