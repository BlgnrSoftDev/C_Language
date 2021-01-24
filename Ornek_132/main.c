#include <stdio.h>
#include <stdlib.h>

// kullanýcýdan adý alýnan dosyayý olusturma......

int main()
{
    char filename[21];

    printf("Dosyanin adini giriniz : ");
    gets(filename);

    FILE *fileptr;

    fileptr = fopen(filename, "a+"); // dosya varsa ekleme yapýlýr yoksa yeniden olusturulur...

    if(fileptr == NULL)
        printf("Dosyayi acamadik :( ");
    else
        printf("Dosyayi actik :) ");

    fclose(fileptr);
    return 0;
}
