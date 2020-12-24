#include <stdio.h>
#include <stdlib.h>
// pointer kullanýmýyla ortalama bulma programý...
float ortalamabul (float dizi[], int n);

int main()
{
    float b[5] = {10,20,30,40,50}, a ;
    a = ortalamabul(b,5) ;
    printf("\n\n ortalama = %f\n\n",a) ;
    return 0;
}

float ortalamabul (float dizi[], int n)
{
    float *isaretci = dizi, toplam = 0 ;
    printf("\n Dizi :  ") ;
    for(int i = 0; i < n; i++)
    {
        printf(" %.0f, ",*(isaretci + i)) ;
        toplam += *(dizi + i) ;
    }
    return (toplam / n);
}
