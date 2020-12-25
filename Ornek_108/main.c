#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//As using pointers, finding common elements between two random generated array.......

int* findcommon(int *ar, int *ar2,int *common ,int size);

int main()
{
    int arr[50], arr2[50], com[50] ;

    srand(time(0)) ;

    for(int i = 0; i < 50; ++i)
    {
        *(arr + i) = (rand() % 50) + 1 ;
        *(arr2 + i) = (rand() % 50) + 1 ;
    }

    printf(" \nrandom array 1 [%p] :\n\n ==> { ", &arr[0]) ;
    for(int i = 0; i < 50; ++ i)
    {
        printf(" %d,", *(arr + i)) ;
    }

    printf("}\n\n\nrandom array 2 [%p] :\n\n ==> { ",arr2) ;

    for(int i = 0; i < 50; ++ i)
    {
        printf(" %d,", *(arr2 + i)) ;
    }

    printf("}\n\n") ;

    printf("\ncommon array [%p] ;\n\n", com) ; // to control if address is changed

    printf("\nCalculating.......\n\n\n") ;

    printf("\n\n ==> common array [%p] ;", findcommon(&arr[0], arr2, com,50)); // to control if address is changed

    printf("\n\n\n") ;

    return 0;
}

 int* findcommon(int *ar, int *ar2,int *common ,int size)
 {
     int  n = 0, j ;

     printf("Common elements :\n\n ==> { ") ;

     for(int i = 0; i < size; ++i)
     {
         for(j = 0; j < i; ++j)
         {
             if( *(ar + i) == *(ar + j) )
                break;
         }

         if(i != j)
            continue ;

         for(int k = 0; k < size; ++k)
         {
             if(*(ar + i) == *(ar2 + k))
             {
                 *(common + n) = *(ar + i) ;
                 printf(" %d, ", *(common + n)) ;
                 n++ ;
                 break ;
             }

         }




     }

     printf("}\n\n ==> %d common elements have been found...", n) ;

     return common ;
 }
