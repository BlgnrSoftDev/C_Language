#include <stdio.h>
#include <stdlib.h>
/* Kullanicidan alinan boyut degerleriyle dizi olusturup , dizinin elemanlarinin toplamini bulan ve sonra kullanicinin istedigi kadar eleman eklenen ve dolayisiyla yeni toplami bulan program... */
int main()
{
    int size,extra ;
    printf("Kac tane sayi girmek istiyorsunuz :\t") ;
    scanf("%d", &size) ;
    int *array = (int *) calloc( size , sizeof(int)) ;

    printf("\n\n") ;

    for(int i = 0; i < size; ++i)
    {
        printf("Dizi[%d] :\t",i) ;
        scanf("%d",&array[i]) ;
    }

    int j = 0, sum = 0 ;
    while(j < size)
    {
        sum += *(array + j) ;
        ++j ;
    }

    printf("\n\n Toplam :\n\n ==>  %d\n\n", sum) ;

    printf("\nKac eleman eklemek istiyorsunuz :\t") ;
    scanf("%d", &extra) ;
    printf("\n\n") ;


    array = (int *) realloc(array, sizeof(int) * (extra + size)) ;

    for(int i = 0; i < extra; ++i)
    {
        printf(" Dizi[%d] :\t", (size + i)) ;
        scanf("%d", (array + size + i)) ;
    }

    sum = 0 ;
    for(int i = 0; i < (size + extra); ++i)
    {
        sum += *(array + i) ;
    }

    printf("\n\n Toplam :\n\n ==>  %d\n\n", sum) ;


    free(array) ; // we're done with array....
    return 0;
}
