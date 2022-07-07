#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,k;
    int cont,aux;
    int vag[50];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&m);
        cont = 0;
        for(j=0;j<m;j++){
            scanf("%d",&vag[j]);
        }
        for(j=0;j<m;j++){
            for(k=j+1;k<m;k++){
                if(vag[j]>vag[k]){
                    aux = vag[j];
                    vag[j] = vag[k];
                    vag[k] = aux;
                    cont++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cont);
    }

    return 0;
}
