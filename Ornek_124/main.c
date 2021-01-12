#include <stdio.h>
#include <stdlib.h>

// struct kullanýmý...
struct Ogrenci
{
    int no;
    char ad[51];
    char soyad[51];
    char bolum[51];
    float genel_ortalama;

};
int main()
{
    struct Ogrenci ogrenciler[3];

    for(int i = 0; i < 3; ++i)
    {
        printf("%d. ogrencinin adi : ",i + 1);
        scanf("%s",ogrenciler[i].ad);
        printf("%d. ogrencinin soyadi : ",i + 1);
        scanf("%s",ogrenciler[i].soyad);
        printf("%d. ogrencinin no : ",i + 1);
        scanf("%d",&ogrenciler[i].no);
        printf("%d. ogrencinin bolumu : ",i + 1);
        scanf("%s",ogrenciler[i].bolum);
        printf("%d. ogrencinin ortalamasi : ",i + 1);
        scanf("%f",&ogrenciler[i].genel_ortalama);
    }


    for(int j = 0; j < 3; ++j)
    {
        printf("%d. ogrencinin adi : %s ", j + 1, ogrenciler[j].ad);
        printf("%d. ogrencinin soyadi : %s ", j + 1, ogrenciler[j].soyad);
        printf("%d. ogrencinin no : %d ",j + 1, ogrenciler[j].no );
        printf("%d. ogrencinin bolumu : %s", j + 1, ogrenciler[j].bolum);
        printf("%d. ogrencinin ortalamasi f : ",j + 1, ogrenciler[j].genel_ortalama);

    }


    return 0;
}
