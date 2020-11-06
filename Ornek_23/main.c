#include <stdio.h>
#include <stdlib.h>

int main()
{
    int basla,bitis,toplam;
    printf("Baslangic ile bitis degiskeni arasi degerleri toplama...\n");
    printf("Baslangic degeri giriniz:\t");
    scanf("%d",&basla);
    printf("Bitis degeri giriniz:\t");
    scanf("%d",&bitis);

    while(basla<=bitis){
        toplam=toplam+basla;
        basla++;
    }
    printf("Belirlediginiz degerler toplamý: %d",toplam);
    return 0;
}
