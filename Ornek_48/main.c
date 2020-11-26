#include <stdio.h>
#include <stdlib.h>

int main()
{
    //MATRÝS ÇARPIMI
    int matris[2][3] = {1,2,-1, 3,1,4},matris2[3][2] = {2,1, -1,6, 7,2}, sonuc[2][2],m,n,i,j,k,toplam;
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0,toplam=0;k<3;k++){
                toplam += (matris[i][k] * matris2[k][j]) ;
            }
            sonuc[i][j] = toplam ;
            printf(" %d ",sonuc[i][j]);

        }
        printf("\n");
    }



    return 0;
}
