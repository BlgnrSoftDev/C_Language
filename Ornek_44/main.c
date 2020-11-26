#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uzunluk,dizi[20],i,basla,orta,son,ara,kontrol=0;
    printf("Ikili arama algoritmasina hosgeldiniz \n");
    printf("Dizinin boyutunu belirleyiniz (max 20) :\t");
    scanf("%d",&uzunluk);

    for(i=0;i<uzunluk;i++){
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("aranacak sayiyi giriniz");
    scanf("%d",&ara);
    basla = 0;
    son = uzunluk-1;
    orta = (basla+son)/2;
    while(basla<=son){
    if(ara==dizi[orta]){
        printf("Aradiginiz sayi %d. indiste bulunmustur.",orta);
        break;
    }
    else if(ara>dizi[orta]){
        basla = orta+1;
    }
    else{
        son = orta-1;
    }
    orta = (basla+son)/2;
    if(basla>son){
        printf("Aradiginiz deger bulunamadi...");
        break;
    }
    }



    return 0;
}
