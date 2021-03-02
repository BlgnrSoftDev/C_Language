#include <stdio.h>
#include <stdlib.h>

// Kombinasyon Hesaplama
double faktoriyel(int n);

int main()
{
    int x, y ;
    printf("(x,y) kombinasyon hesaplama :\n");
    printf("x = ? giriniz\n\n==> ");
    scanf("%d", &x);
    printf("\n++++++++++++++++++++++++++++++++++++++\n\n");
    printf("y = ? giriniz\n\n==> ");
    scanf("%d", &y);
    printf("\n++++++++++++++++++++++++++++++++++++++\n\n");

    double sonuc = ( faktoriyel(x) / faktoriyel(y)) ;
    printf("////// %d nin %d ile kombinasyonu %0.3lf dir.//////", x, y, sonuc);
    printf("\n\n++++++++++++++++++++++++++++++++++++++\n\n");
    return 0;
}

double faktoriyel(int n)
{
    double total = 1;
    int i = n;
    while(i > 0)
    {
        total *= i ;
        --i ;
    }

    return total ;
}
