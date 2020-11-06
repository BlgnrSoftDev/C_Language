#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girilen_sayi;
    double kare_hesaplama=1;
    printf("Sifir girilene kadar girilen degerlerin karesini alma...\n");
    do{
        printf("\n");
        printf("lutfen sayiyi giriniz:\t");
        scanf("%d",&girilen_sayi);
        kare_hesaplama=girilen_sayi*girilen_sayi;
        printf("1. sayi:\t%d\n",girilen_sayi);
        printf("1. sayi karesi:\t%.0f\n",kare_hesaplama);
        girilen_sayi=0;
        kare_hesaplama=1;
    }while(girilen_sayi==0);

    return 0;
}
