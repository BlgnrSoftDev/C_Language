#include <stdio.h>
#include <stdlib.h>

// kullan�c�dan ad� al�nan dosyay� olusturma......

int main()
{
    char filename[21];

    printf("Dosyanin adini giriniz : ");
    gets(filename);

    FILE *fileptr;

    fileptr = fopen(filename, "a+"); // dosya varsa ekleme yap�l�r yoksa yeniden olusturulur...

    if(fileptr == NULL)
        printf("Dosyayi acamadik :( ");
    else
        printf("Dosyayi actik :) ");

    fclose(fileptr);
    return 0;
}
