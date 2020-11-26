#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9};
    int matris2 [3][3] = {1,0,0,
                          0,1,0,
                          0,0,1};
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

                printf("%d,",matris[j][i]);

        }
        printf("\n");
    }
    return 0;
}
