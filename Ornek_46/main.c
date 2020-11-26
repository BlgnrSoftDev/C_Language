#include <stdio.h>
#include <stdlib.h>

int main()
{
    // MATRÝS TOPLAMI PROGRAMI
    int matris[3][3] = {1,2,3, 4,5,6, 7,8,9},matris2[3][3] = {1,0,0, 0,1,0, 0,0,1},matris3[3][3];
    char i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matris3[i][j] = matris[i][j] + matris2[i][j] ;
        }
    }

    for(int m=0;m<3;m++){
        for(int j=0;j<3;j++){
            printf("%2.0d,",matris3[m][j]);
        }
        printf("\n");
    }

    return 0;
}
