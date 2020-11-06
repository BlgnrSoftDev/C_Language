#include <stdio.h>
#include <stdlib.h>

int main()
{
    char yas;
    int gun,saat;
    long int dakika,saniye;
    printf("Kullanicidan yasini alarak gun,saat,dakika,saniye cinsinden hesaplayan programa hosgeldiniz....\n");
    printf("Yasinizi giriniz:\t");
    scanf(" %c",&yas);


    gun=yas*365;
    saat=gun*24;
    dakika=saat*60;
    saniye=dakika*60;

    printf("Yasinizin gun turunden degeri:   \t%d gun\n",gun);
    printf("Yasinizin saat turunden degeri:  \t%d saat\n ",saat);
    printf("Yasinizin dakika turunden degeri:\t%ld dakika\n ",dakika);
    printf("Yasinizin saniye turunden degeri:\t%ld saniye\n ",saniye);
    return 0;
}
