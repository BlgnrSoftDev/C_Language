#include <stdio.h>
#include <stdlib.h>

int main()
{
    // faktoriyel hesaplayýcý #1
    double sayi,carpim=1;
    printf("Faktoriyel Hesaplama Projesine Hosgeldiniz..!\n");
    scanf("%lf",&sayi);
    for(int i=1;i<=sayi;i++){
        carpim=carpim*i;
    }
    printf("Sonuc: %.0lf",carpim);

    return 0;
}
