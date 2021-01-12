#include <stdio.h>
#include <stdlib.h>
 // fonksiyonlar ile struct kullanýmý



typedef struct
{
    long long no ;
    char ad[30];
    char soyad[30];
    int cinsiyet;
    float genel_ortalama;
}Ogrenci;

int main()
{
    Ogrenci New_1[2];

    for(int i = 0; i < 2; ++i)
    {
        printf("Okul numarasini giriniz:  ");
        scanf("%lld",&New_1[i].no);
        printf("Adinizi giriniz:  ");
        scanf("%s",New_1[i].ad);
        printf("Soyadinizi giriniz:  ");
        scanf("%s",New_1[i].soyad);
        printf("Cinsiyeti giriniz erkek ise 1, kadin ise 0 :  ");
        scanf("%d",&New_1[i].cinsiyet);
        printf("Genel ortalamayi giriniz:  ");
        scanf("%f",&New_1[i].genel_ortalama);
    }

    printf("\n\nsonuclar yazdiriliyor...\n\n");
    sleep(5);

    printf("-----------------------------//______|<<<__Sonuclar__>>>|_______\\------------------------------\n\n\n");

    Ogrenci* ptr = New_1 ;
    OgrYazdir(New_1);


    return 0;
}

 void OgrYazdir(Ogrenci *arr)
{
    for(int i = 0; i < 2; ++i)
    {
        printf("Ad : %s\n", (*(arr + i)).ad);
        printf("Soyad : %s\n", (*(arr + i)).soyad);
        printf("No : %lld\n", (*(arr + i)).no);
        printf("Genel ort : %f\n", (*(arr + i)).genel_ortalama);
        if((*(arr + i)).cinsiyet == 1)
            printf("Cinsiyet : Erkek\n");
        else
            printf("Cinsiyet : Kadýn\n");

    }

    printf("\n\n");


}


