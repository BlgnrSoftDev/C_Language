#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// iç içe struct kullanýmý....

typedef struct
{
    int vize_notu[2];
    int quiz_notu[2];
    int final_notu;
}OgrenciNot;


typedef struct
{
    char telefon[12];
    char e_posta[30];
}Iletisim;

typedef struct
{
    char ad[25];
    char soyad[25];
    int cinsiyet;
    Iletisim Ogrenci_il;
    OgrenciNot Ogrenci_notlar;
}Ogrenci;

int main()
{
    Ogrenci Huseyin;
    strcpy(Huseyin.ad, "Huseyin");
    strcpy(Huseyin.soyad, "Bilginer");
    Huseyin.cinsiyet = 1;
    strcpy(Huseyin.Ogrenci_il.telefon, "05417354874");
    strcpy(Huseyin.Ogrenci_il.e_posta, "bilginerhuseyin@hotmail.com");
    Huseyin.Ogrenci_notlar.vize_notu[0] = 80 ;
    Huseyin.Ogrenci_notlar.vize_notu[1] = 90 ;
    Huseyin.Ogrenci_notlar.quiz_notu[0] = 65 ;
    Huseyin.Ogrenci_notlar.quiz_notu[1] = 75 ;
    Huseyin.Ogrenci_notlar.final_notu = 98 ;


    printf("-------------------//TOTAL //----------------------------\n\n");
    printf("Ad : %s\n\n", Huseyin.ad);
    printf("Soyadi : %s\n\n", Huseyin.soyad);
    if(Huseyin.cinsiyet == 1)
        printf("Cinsiyet : Erkek\n\n");
    else
        printf("Cinsiyet : Kadýn\n\n");
    printf("Telefon : %s\n\n", Huseyin.Ogrenci_il.telefon);
    printf("E_posta : %s\n\n", Huseyin.Ogrenci_il.e_posta);
    for(int i = 0; i < 2; ++i)
        printf("%d. Vize Notu : %d\n\n", i+1, Huseyin.Ogrenci_notlar.vize_notu[i]);
    for(int j = 0; j < 2; ++j)
        printf("%d. Quiz Notu : %d\n\n", j+1, Huseyin.Ogrenci_notlar.quiz_notu[j] );
    printf("Final Notu : %d\n\n", Huseyin.Ogrenci_notlar.final_notu);


    printf("----------------------------------------------------------\n\n");
    return 0;
}
