#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char metin1[25],metin2[25];
    short int sonuc;

    printf("****************************************************************************************************************\n\n\n\n");
    printf("Girilen metinleri alfabeye gore siralayan program\n\n\n");

    printf("Lutfen 1. metni giriniz:\t");
    scanf("%s",metin1);

    printf("Lutfen 2. metni giriniz:\t");
    scanf("%s",metin2); //karakter dizilerinde ampersand kullanmiyoruz..

    sonuc = strcmp(metin1,metin2); //bu fonksiyonla ascii tablosuna göre sýralama yapýlýyor..

    if( sonuc == 0 ) // eðer 0 döndürürse metinler ayný demektir...
        printf("%s metni %s metni ile aynidir..",metin1,metin2);
    else if( sonuc > 0)// eðer 0 dan büyük döndürürse ilk deðerin asci kodu daha büyüktür.. (windows icin genelde 1 döndürür)
        printf("%s metni %s metninden alfabeye gore daha ileridedir...",metin1,metin2);
    else // eðer 0 dan küçük döndürürse ilk deðerin ascii deðerinin ascii kodu daha küçüktür.. (windows icin genelde -1 döndürür)
        printf("%s metni %s metninden alfabeye gore daha geridedir..",metin1,metin2);

     printf("\n\n\n\n****************************************************************************************************************");


    return 0;
}
