#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// pointer kullanarak dizinin elemanlarinin karesini almak....

void arr(int *arr2, int sizee) ;

int main()
{
    int arr[50] ;
    srand(time(0)) ;

    printf(" Original array :\n\n==> { ") ;
    for(int i = 0; i < 50; ++i)
    {
        *(arr + i) = (rand()%50) + 1 ; // random sayilari 50 ile modunu aliyoruz ve 1 - 50 arasında olması icin 1 arttırıyoruz..
        printf(" %d, ", *(arr + i)) ;
    }
    printf("}") ;
    printf("\n\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-") ;
    printf("\n\n After pow(), array :\n\n==> { ") ;
    multiply(&arr[0], 50) ;
    printf("}\n\n\n") ;
    return 0;
}

void multiply(int *arr2, int sizee)
{
    for(int i = 0; i < sizee; ++i)
    {
        *(arr2 + i) = pow(*(arr2 + i), 2) ;
        printf(" %d, ", *(arr2 + i)) ;
    }
}
