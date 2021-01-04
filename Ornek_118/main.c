#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][3] = {1, 2, 3,
                   4, 5, 6} ;
    matris_yaz(m, 2, 3) ;
    return 0;
}

void matris_yaz(int *z, int satir,int sutun)
{

    for(int i = 0; i < satir; ++i)
    {
        for(int j = 0; j < sutun; ++j)
        {
            printf(" %d ", *(z + i * sutun + j)) ;
        }
        printf("\n") ;
    }
}
