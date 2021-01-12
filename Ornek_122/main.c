#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    int ogrenci_no; // member
    char ogrenci_ad[51];
    char ogrenci_soyad[51];
    char ogrenci_mail[51];
    int notlar[20][3];

//kapsüllemek - encapsulatýon
};

typedef int amad; // veri tipinin adýný deðiþtirdik. :) yine int kullanabiliriz.


typedef struct insan
{
    int yas;
    int boy;
    float kilo;
    char ad[51], soyad[51];
} yeniad ; // struct'ýn yeni adý yeniad oldu.



int main()
{
    struct ogrenci ahmet, burak;
    yeniad insan1;
    sprintf(burak.ogrenci_ad,"Ogrenci : %s","burak");
    strcpy(ahmet.ogrenci_ad,"ahmet");
    puts(ahmet.ogrenci_ad);

    ahmet = burak ; // bu sekilde ayni turden olan iki struct'ý birbirine atayabiliriz.

    puts(ahmet.ogrenci_ad);

    amad sayi = 1 ;
    printf("\n%d", sayi);

    insan1.kilo = 70 ;
    printf("\n%f", insan1.kilo);


    return 0;
}
