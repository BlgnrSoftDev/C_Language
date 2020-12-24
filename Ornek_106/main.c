#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// fonksiyon pointer ile oklid uzaklýgý hesaplama programi


float f(float *a, float *b, float *c, float *d)
{
    float distances ;
    distances = sqrt(pow(*a - *c, 2) + pow(*b - *d, 2)) ;
    return distances ;
}

int main()
{
    float (*euclidean) (float* , float* , float* , float* ), a, b, c, d, sonuc; // isaretci fonk. tanimi yapiyoruz (float* , float* , float* , float* ) parametreleri orjinal fonk. gibi olmalý
    euclidean = &f ;

    printf(" ilk noktayi giriniz :\t") ;
    scanf("%f %f",&a,&b) ;

    printf("\n ikinci noktayi giriniz: ") ;
    scanf("%f %f",&c,&d) ;



    printf("\n--- -- - - - - - - - - --  --  --  - - - - - \n") ;
    printf("  f fonksiyonun adresi : %p\n",&f) ;
    printf("  f fonksiyonun adresi : %p\n",euclidean) ;
    printf("\n--- - -- -  --  - - - - - - - - - --  - -- - - \n") ;

    sonuc = euclidean(&a,&b,&c,&d) ;
    printf("  euclidean distances \n\n==> : %f\n",sonuc) ;
    return 0;
}


