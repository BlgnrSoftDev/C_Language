#include <stdio.h>
#include <stdlib.h>

int main()
{
    int topla,fark,sayi,sayi2;
    float bolum,carpim;
    char islem,karar;
    printf("Kullanicinin istedigi surece tekrar calistirilan hesap makinesi\n");
    do{
    printf("Lutfen ilk sayiyi giriniz:\t");
    scanf("%d",&sayi);
    printf("Lutfen ikinci sayiyi giriniz:\t");
    scanf("%d",&sayi2);
    printf("Toplama=1,Fark=2,Carpma=3,Bolum=4\n");
    printf("Lutfen islem tipini seciniz:\t");
    scanf(" %c",&islem);
    if(islem=='1'){
        topla=sayi2+sayi;
        printf("Islem sonucunuz:\t%d\n",topla);
        }
    else if(islem=='2'){
        fark=sayi-sayi2;
        printf("Islem sonucunuz:\t%d\n",fark);
        }
    else if(islem=='3'){
        carpim=sayi2*sayi;
        printf("Islem sonucunuz:\t%f\n",carpim);
        }
    else if(islem=='4'){
        bolum=(float)sayi/sayi2;
        printf("Islem sonucunuz:\t%f\n",bolum);
        }
    else
        printf("Yanlis tuslama yaptiniz....!\n");
    printf("Eger tekrar hesaplama yapmak istiyorsaniz 'e' tuslayin:\t");
    scanf(" %c",&karar);
    }while(karar != 'e');
    return 0;
}
