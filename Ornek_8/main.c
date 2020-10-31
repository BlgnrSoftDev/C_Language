#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem;
    double sayi1,sayi2,sonuc;
    printf("Lutfen ilk sayiyi giriniz:\t");
    scanf("%lf",&sayi1);
    printf("Lutfen ikinci sayiyi giriniz:\t");
    scanf("%lf",&sayi2);
    printf("|||Toplama:1 Cikarma:2 Carpma:3 Bolme:4|||\n");
    printf("Lutfen islem turunu seciniz:\t");
    scanf("%d",&islem);
    switch(islem){
case 1:
    sonuc=sayi1+sayi2;
    break;
case 2:
    sonuc=sayi1-sayi2;
    break;
case 3:
    sonuc=sayi1*sayi2;
    break;
case 4:
    sonuc=sayi1/sayi2;
    break;
default:
    printf("Yanlis tuslama yaptiniz...\n");
    }
    printf("Yapilan islem sonucu: \t%lf",sonuc);





    return 0;
}
