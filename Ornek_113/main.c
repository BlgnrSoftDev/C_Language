#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//


void main(){​​
int satir_sayisi=3;
int sutun_sayisi=4;



int **Mptr=(int **)malloc(satir_sayisi*sizeof(int *));



for(int i=0;i<satir_sayisi;i++)
    *(Mptr+i)=(int *)malloc(sutun_sayisi*sizeof(int));




for(int i=0;i<satir_sayisi;i++)
    for(int j=0;j<sutun_sayisi;j++)
        scanf("%d",&Mptr[i][j]);





for(int i=0;i<satir_sayisi;i++)
    {​​
    for(int j=0;j<sutun_sayisi;j++)
        printf("%5d", Mptr[i][j] );
        printf("\n");
    }​​




//*(*(Mptr+i)+j)
}​​
