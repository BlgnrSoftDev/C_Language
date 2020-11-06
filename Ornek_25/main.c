#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar_uzunluk,alan,cevre;
    printf("Kare Alan ve Cevre Hesaplayiciya Hosgeldiniz...\n");
    printf("Oncelikle Karenin Kenarini Santimetre Degerinden Giriniz:\t");
    scanf("%d",&kenar_uzunluk);
    printf("\n");

    alan = kenar_uzunluk*kenar_uzunluk;
    cevre= kenar_uzunluk*4;

    printf("Karenin alani: \t%d cm2'dir.\n",alan);
    printf("Karenin cevresi: %d cm'dir.",cevre);
    printf("\n");




    return 0;
}
