#include <stdio.h>
#include <stdlib.h>
/*double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
tan�mlay�n�z.
� Ad�m 1: �nce bu dizinin indisleri, dizi de�erleri ve dizi
elemanlar�n�n adresleri main() fonksiyonunda ekrana
yazd�r�lacakt�r.
� Ad�m 2: Daha sonra, a�a��daki prototipteki fonksiyon ile
dizinin en b�y�k eleman� bulunacak ve bu eleman�n
adresi geriye d�nd�r�lerek ekrana yazd�r�lacakt�r.
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
