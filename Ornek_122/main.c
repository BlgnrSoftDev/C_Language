#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    int ogrenci_no; // member
    char ogrenci_ad[51];
    char ogrenci_soyad[51];
    char ogrenci_mail[51];
    int notlar[20][3];

//kaps�llemek - encapsulat�on
};

typedef int amad; // veri tipinin ad�n� de�i�tirdik. :) yine int kullanabiliriz.


typedef struct insan
{
    int yas;
    int boy;
    float kilo;
    char ad[51], soyad[51];
} yeniad ; // struct'�n yeni ad� yeniad oldu.



int main()
{
    struct ogrenci ahmet, burak;
    yeniad insan1;
    sprintf(burak.ogrenci_ad,"Ogrenci : %s","burak");
    strcpy(ahmet.ogrenci_ad,"ahmet");
    puts(ahmet.ogrenci_ad);

    ahmet = burak ; // bu sekilde ayni turden olan iki struct'� birbirine atayabiliriz.

    puts(ahmet.ogrenci_ad);

    amad sayi = 1 ;
    printf("\n%d", sayi);

    insan1.kilo = 70 ;
    printf("\n%f", insan1.kilo);


    return 0;
}
