#include <stdio.h>
#include <stdlib.h>

int main()
{
    //faktoriyel hesaplayýcý projesi #2
    double carpim=1,sayi;
    int i=1;
    printf("Faktoriyel Hesaplayici'ya hosgeldiniz!!!\n");
    printf("Sayi giriniz:\t");
    scanf("%lf",&sayi);
    while(i<=sayi){
        carpim*=i;
        i++;
    }
    printf("Sonuc:\t %.0lf",carpim);
    return 0;
}
