#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testcase=0;

    while(1){
        char line[3];
        int knight[2],pawns[8][2],moves[8][2];
        int i,j,m,securemoves=8;

        scanf("%s",line);
        if(line[0]=='0') break;
        knight[0]=(int)line[0];
        knight[1]=(int)line[1];

        for(i=0;i<8;++i){
            scanf("%s",line);
            pawns[i][0]=(int)line[0];
            pawns[i][1]=(int)line[1];
        }
        for(m=0,i=-2;i<=2;++i){
            for(j=-2;j<=2;++j){
                if(!i || !j || abs(i)==abs(j))
                    continue;
                moves[m][0]=i;
                moves[m][1]=j;
                ++m;
            }
        }
        for(m=0;m<8;++m){
            int destination[2]={
            knight[0]+moves[m][0],knight[1]+moves[m][1]};

            if(destination[0]<'1' || destination[0]>'8' || destination[1]<'a' || destination[1]>'h')
                --securemoves;
            else{
                for(i=0;i<8;++i){
                    if(destination[0]==pawns[i][0]-1 && (destination[1]==pawns[i][1]-1 || destination[1]==pawns[i][1]+1))
                        --securemoves;
                }
            }
        }

        ++testcase;
            printf("Caso de Teste #%d: %d movimento(s).\n",testcase,securemoves);
    }

    return 0;
}
