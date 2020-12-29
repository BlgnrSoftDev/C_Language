#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*• Sayýsal türde boyutu dinamik olarak dýþarýdan girilecek bir dizi
tanýmlanacaktýr (int *dizi).
• Dizinin boyutu (n deðiþkeni) klavyeden kullanýcýya girdirilmeli
ve dinamik dizi malloc fonksiyonu kullanýlarak
oluþturulmalýdýr.
• Dizi boyutu girildikten sonra dizinin her bir için deðerler
klavyeden girilmelidir.
• Son olarak dizi elemanlarýnýn toplamý ve aðýrlýklý ortalamalarý
yazdýrýlacaktýr.*/

void fillarr(float *arrptr, int size) ;
float calcaverage (float *ptrtr, int size);

void main(void)
{
    int size;
    printf(" 1B Dizinin boyutunu giriniz :\t") ;
    scanf("%d",&size) ;
    float *array = (float *) malloc( sizeof(float) * size ) ; //bellekten deðerleri rastgele size boyutunda eleman ayýrdýk.

    if( array == NULL)
        printf("yetersiz bellek alaný...."),exit(1) ; // bunu yapmamýz tavsiye edilir eðer calloc,malloc bellekten yer ayýramazsa null döndürür..

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
