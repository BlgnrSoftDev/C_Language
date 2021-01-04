#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choice, r, r2, r3, c, c2, c3 ;
    retry :
    printf("*************************************************Welcome to Matrix Program************************************\n");
    printf("\nPress and Enter, for multiplication : (1), for extraction : (2), for summation : (3) \n");
    printf("please pick your operations :\t");
    scanf("%d", &choice);
    printf("\n******************************************************************************************************\n");
    printf("Please Enter First Matrix sizes (row column) (leave one space between) :\t");
    scanf("%d %d", &r, &c);

    r2 = (choice == 1)? c: r;
    c2 = (choice == 1)? r: c;
    r3 = (choice == 1)? r: r;
    c3 = (choice == 1)? r: c;

    float** Matrix = (float**) calloc(r,sizeof(float*));
    for(int i = 0; i < r; ++i)
    {
        *(Matrix + i) = (float*)calloc(c,sizeof(float));
    }

    float** Matrix2 = (float**) calloc(r2, sizeof(float*));
    for(int i = 0; i < r2; ++i)
    {
        *(Matrix2 + i) = (float*)calloc(c2, sizeof(float));
    }

    float** Total = (float**) calloc(r3, sizeof(float*));
    for(int i = 0; i < r3; ++i)
    {
        *(Total + i) = (float*)calloc(c3, sizeof(float));
    }

    printf("\n******************************************************************************************************\n");
    for(int i = 0; i < r; ++i)
        {
            for(int  j = 0; j < c; ++j)
            {
                printf("please, Enter Matrix1[%d][%d] : ", i, j);
                scanf("%f", &Matrix[i][j]);
            }
        }

    printf("\n******************************************************************************************************\n");

    for(int i = 0; i < r2; ++i)
    {
        for(int j = 0; j < c2; ++j)
        {
            printf("please, Enter Matrix2[%d][%d] : ", i, j);
            scanf("%f", &Matrix2[i][j]);
        }
    }
    printf("\n******************************************************************************************************\n");


    if(choice == 1)
    {
        Multiplication(Matrix, Matrix2, Total, r, c);
        printf("\n\nMatrix1 :\n\t");
        PrintMatrix(Matrix, r, c);
        printf("\n******************************************************************************************************");
        printf("\n\nMatrix2 :\n\t");
        PrintMatrix(Matrix2, c, r);
        printf("\n******************************************************************************************************");
        printf("\n\nTotal :\n\t");
        PrintMatrix(Total, r, r);
        printf("\n******************************************************************************************************\n");
    }
    else if(choice == 2)
    {
        Extraction(Matrix, Matrix2, Total, r, c);
        printf("\nMatrix1 :\n\t");
        PrintMatrix(Matrix, r, c);
        printf("\n******************************************************************************************************");
        printf("\nMatrix2 :\n\t");
        PrintMatrix(Matrix2, r, c);
        printf("\n******************************************************************************************************");
        printf("\nTotal :\n\t");
        PrintMatrix(Total, r, c);
        printf("\n******************************************************************************************************\n");
    }
    else if(choice == 3)
    {
        Summation(Matrix, Matrix2, Total, r, c);
        printf("\nMatrix1 :\n\t");
        PrintMatrix(Matrix, r, c);
        printf("\n******************************************************************************************************");
        printf("\nMatrix2 :\n\t");
        PrintMatrix(Matrix2, r, c);
        printf("\n******************************************************************************************************");
        printf("\nTotal :\n\t");
        PrintMatrix(Total, r, c);
        printf("\n******************************************************************************************************\n");
    }
    else
    {
        printf("Wrong choice!!! Please try again");
        goto retry ;
    }



    return 0;
}

void Extraction(float **M1_e, float **M2_e, float **T_e, int r_e, int c_e)
{
    for(int i = 0; i < r_e; ++i)
    {
        for(int j = 0; j < c_e; ++j)
        {
            *(*(T_e + i) + j) = *(*(M1_e + i) + j) - *(*(M2_e + i) + j) ;
        }
    }


}

void Multiplication(float** M1_m, float** M2_m, float** T_m, int r_m, int c_m)
{
    for(int i = 0; i < r_m; ++i)
    {
        for(int j = 0; j < c_m; ++j)
        {

            for(int k = 0; k < c_m; ++k)
            {
                *( *(T_m + i) + j ) += *( *(M1_m + i) + k)  *  *( *(M2_m + k) + j) ;
            }
        }
    }
}

void Summation(float** M1_s, float** M2_s, float** T_s, int r_s, int c_s)
{
    for(int i = 0; i < r_s; ++i)
    {
        for( int j = 0; j < c_s; ++j)
        {
            *( *(T_s + i) + j) = *( *(M1_s + i) + j) + *( *(M2_s + i) + j);
        }
    }
}

void PrintMatrix(float** T_p, int r_p, int c_p)
{

    for(int i = 0; i < r_p; ++i)
    {
        for(int j = 0; j < c_p; ++j)
        {
            printf(" %3.2f ", *( *(T_p + i) + j));
        }
        printf("\n\t");
    }
}
