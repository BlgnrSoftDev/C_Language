#include <stdio.h>
#include <stdlib.h>

void sum(int x, int y, int z, int v,int matrix1[x][y], int matrix2[z][v] ) ;
void subtraction(int x, int y, int z, int v,int matrix1[x][y], int matrix2[z][v] ) ;
int fill_to_matrix(int x, int y, int z, int v);

int main()
{
    int a,b,c,d ;
    printf("Sirasiyla ilk matrisin satir, sutun ve ikinci matrisin satir,sutun sayisini gir (arada birer spacelik bosluk birak) :\t");
    scanf("%d %d %d %d",&a,&b,&c,&d) ;

    fill_to_matrix(a,b,c,d) ;
    return 0;
}

int fill_to_matrix(int x, int y, int z, int v)
{
    int matrix1[x][y], matrix2[z][v] ;

    for(int i = 0; i < x; ++i)
    {
        for(int j = 0; j < y; ++j)
        {
            printf("Ilk matrisin %d. satir %d. sutun elemanini giriniz:\t",i + 1, j + 1);
            scanf("%d",&matrix1[i][j]) ;
            printf("\n") ;
        }

    }

        for(int i = 0; i < x; ++i)
    {
        for(int j = 0; j < y; ++j)
        {
            printf("Ikinci matrisin %d. satir %d. sutun elemanini giriniz:\t",i + 1, j + 1);
            scanf("%d",&matrix2[i][j]) ;
            printf("\n") ;
        }

    }

    sum(x, y, z, v,matrix1, matrix2 ) ;
    printf("\n\n") ;
    subtraction(x, y, z, v,matrix1, matrix2 ) ;
    return 0 ;
}

void sum(int x, int y, int z, int v,int matrix1[x][y], int matrix2[z][v] )
{
    printf(" Total :\n");
    for(int i = 0; i < x ; ++i)
    {
        for(int j = 0; j < y; ++j)
        {
            printf(" %d, ",matrix1[i][j] + matrix2[i][j]) ;
        }
        printf("\n") ;
    }

}

void subtraction(int x, int y, int z, int v,int matrix1[x][y], int matrix2[z][v] )
{
   printf(" Total :\n");
   for(int i = 0; i < x; ++i)
   {
       for(int j = 0; j < y; ++y)
       {
           printf(" %d, ",matrix1[i][j] - matrix2[i][j]);
       }

       printf("\n") ;
   }
}

