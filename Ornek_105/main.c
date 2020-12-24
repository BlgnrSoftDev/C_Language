#include <stdio.h>
#include <stdlib.h>
/*double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
tanýmlayýnýz.
• Adým 1: Önce bu dizinin indisleri, dizi deðerleri ve dizi
elemanlarýnýn adresleri main() fonksiyonunda ekrana
yazdýrýlacaktýr.
• Adým 2: Daha sonra, aþaðýdaki prototipteki fonksiyon ile
dizinin en büyük elemaný bulunacak ve bu elemanýn
adresi geriye döndürülerek ekrana yazdýrýlacaktýr.
double* maxAdr(double a[], int boyut)*/

double* maxAdr(double arr[], int dimension) ;
int main()
{

    double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5}, *biggernum ;

    for(int i = 0; i < 6; ++i)
    {
        printf("The Arr %p  x[%d] = %.2lf\n",(x + i),i,*(x + i)) ;
    }

    biggernum = maxAdr(x,6) ;
    printf("\n- -  -- - - - -- - - - - - - - - -- - - - - - -- \n\n") ;
    printf("The bigger num's %p  :  %.2lf\n\n", biggernum, *biggernum) ;

    return 0;
}

double* maxAdr(double arr[], int dimension)
{
    double *maxnum = arr ;

    for(int i = 0; i < dimension; ++i)
    {
        if(*maxnum < *(arr + i))
        {
            maxnum = (arr + i) ;
        }
    }

    return maxnum ;
}
