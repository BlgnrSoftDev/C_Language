#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*� Say�sal t�rde boyutu dinamik olarak d��ar�dan girilecek bir dizi
tan�mlanacakt�r (int *dizi).
� Dizinin boyutu (n de�i�keni) klavyeden kullan�c�ya girdirilmeli
ve dinamik dizi malloc fonksiyonu kullan�larak
olu�turulmal�d�r.
� Dizi boyutu girildikten sonra dizinin her bir i�in de�erler
klavyeden girilmelidir.
� Son olarak dizi elemanlar�n�n toplam� ve a��rl�kl� ortalamalar�
yazd�r�lacakt�r.*/

void fillarr(float *arrptr, int size) ;
float calcaverage (float *ptrtr, int size);

void main(void)
{
    int size;
    printf(" 1B Dizinin boyutunu giriniz :\t") ;
    scanf("%d",&size) ;
    float *array = (float *) malloc( sizeof(float) * size ) ; //bellekten de�erleri rastgele size boyutunda eleman ay�rd�k.

    if( array == NULL)
        printf("yetersiz bellek alan�...."),exit(1) ; // bunu yapmam�z tavsiye edilir e�er calloc,malloc bellekten yer ay�ramazsa null d�nd�r�r..

    fillarr(array, size) ;
    printarr(array, size) ;
    float average =  calcaverage(array, size) ;
    printf("\nTotal Average :\n ==> %f \n\n", average) ;
    free(array) ;


    return 0 ;
}


void fillarr(float *arrptr, int size)
{
    printf("\n\n********************************************************\n\n") ;
    for(int i = 0; i < size; ++i)
    {
        printf(" Enter Arr[%d] %p :\t",i,(arrptr + i)) ;
        scanf("%f",(arrptr + i)) ;
    }

    printf("\n\n********************************************************") ;
}

void printarr( float *ptr, int size)
{
    printf("\n\n Arr[%p] :\n ==>  {",ptr) ;
    for(int i = 0; i < size; ++i)
    {
        printf(" %.2f ",*(ptr + i)) ;
    }

    printf("}\n\n") ;
}

float calcaverage (float *ptrtr, int size)
{
    float toplam = 0.0 ;
    for(int i = 0; i < size; ++i)
    {
        toplam += *(ptrtr + i) ;
    }

    return (toplam / size) ;
}
