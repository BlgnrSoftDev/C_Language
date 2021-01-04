#include <stdio.h>
#include <stdlib.h>

int main()
{
    double** M = (double **) calloc(3,sizeof(double*));
    for(int i = 0; i < 3; ++i)
    {
        *(M + i) = (double*) calloc(3,sizeof(double));
    }

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("Enter Matrix[%d][%d] : ",i,j);
            scanf("%lf",&M[i][j]);

        }
    }

    eshelonform(M,3,3);
    return 0;
}


void scalermultiplication(int scaler, double** M_s, int r_s, int c_s)
{
    for(int i = 0; i < r_s; ++i)
    {
        for(int j = 0; j < c_s; ++j)
        {
            *(*(M_s + i) + j ) = *(*(M_s + i) + j ) * scaler ;
        }
    }


}


void printmatix(int r_p, int c_p, double** M_y)
{
    printf("\n\nTotal : \n==>{") ;
    for(int i = 0; i < r_p; ++i)
    {
        for(int j = 0; j < c_p; ++j)
        {
            printf(" %3.2lf ",*(*(M_y + i) + j )) ;
        }
        printf("\n    ") ;
    }
    for(int i = 0; i < r_p; ++i)
    {
        printf("  ");
    }
    printf("}\n\n") ;
}

void eshelonform(double** M_e, int r_e, int c_e)
{

int n ;
double pivot ;

for(int i = 0, n = 0, ctrl = 0, step = 0; i < r_e ; ++i)
{
    afterchangedrows:
    while(1)
    {
        if(M_e[i][n + ctrl] == 0)
        {
            ctrl++ ;
        }

        else
        {
            n = n + ctrl ;
            break ;
        }

        if((n + ctrl) == c_e)
        {
            changerows(i, i + 1, M_e, c_e) ;
            ctrl = 0 ;
            goto afterchangedrows ;
        }



    }




    pivot = M_e[i][n] ;

    for(int k = 0; k < c_e; ++k)
    {
        M_e[i][k] = M_e[i][k] / pivot ;
    }


    if(i >= r_e)
    {
        break;
    }

    double underpivot;
    for(int b = i + 1 ; b < r_e; ++b )
    {
        underpivot = M_e[b][n];
        for(int f = 0; f < c_e; ++f )
        {
            M_e[b][f] = M_e[b][f] - ( underpivot * M_e[i][f]   ) ;
        }
    }


    printf("\nStep %d : \n==>{",++step) ;

    for(int j = 0; j < r_e; ++j)
    {
        for(int k = 0; k < c_e; ++k)
        {
            printf(" %.2lf ",M_e[j][k]) ;
        }
        printf("\n   ") ;
    }



}

}

void transposeform(double** M_t, double** transpose, int r_t, int c_t)
{
    for(int i = 0; i < r_t; ++i)
    {
        for(int j = 0; j < c_t; ++j)
        {
            transpose[j][i] = M_t[i][j] ;
        }
    }


}


void changerows(int i, int j, double** M_c, int c_c)
{
    double temp ;
        for(int k = 0; k < c_c; ++k)
        {
            temp = M_c[i][k] ;
            M_c[i][k] = M_c[j][k] ;
            M_c[j][k] = temp ;
        }
}




