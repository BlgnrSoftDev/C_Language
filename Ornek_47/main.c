#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris1[3][3] = {5,7,9, 0,3,0, 7,5,0}, matris2[3][3] = {3,3,1, 2,1,3, 1,0,0}, matris3[3][3] = {};
    int i,j,k,toplam;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for( toplam=0,k=0;k<3;k++){
                toplam += (matris1[i][k] * matris2[k][j]) ;
            }

            matris3[i][j] = toplam;
            printf(" %4.0d ",matris3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
