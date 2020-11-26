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

    sonuc = strcmp(metin1,metin2); //bu fonksiyonla ascii tablosuna g�re s�ralama yap�l�yor..

    if( sonuc == 0 ) // e�er 0 d�nd�r�rse metinler ayn� demektir...
        printf("%s metni %s metni ile aynidir..",metin1,metin2);
    else if( sonuc > 0)// e�er 0 dan b�y�k d�nd�r�rse ilk de�erin asci kodu daha b�y�kt�r.. (windows icin genelde 1 d�nd�r�r)
        printf("%s metni %s metninden alfabeye gore daha ileridedir...",metin1,metin2);
    else // e�er 0 dan k���k d�nd�r�rse ilk de�erin ascii de�erinin ascii kodu daha k���kt�r.. (windows icin genelde -1 d�nd�r�r)
        printf("%s metni %s metninden alfabeye gore daha geridedir..",metin1,metin2);

     printf("\n\n\n\n****************************************************************************************************************");


    return 0;
}
