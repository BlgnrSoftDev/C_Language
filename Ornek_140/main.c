#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// bir dosyanýn icerigini diger dosyaya kopyalama...

int main()
{
    char copy[1000], base[20], target[20];

    printf(" Kaynak dosyanin adini giriniz : \n==> ");
    scanf("%s", base);

    printf("\n Hedef dosyanin adini giriniz : \n==> ");
    scanf("%s", target);

    FILE *fp = fopen(base, "r");

    if(fp == NULL)
    {
        printf(" Dosya Acilamadi...");
    }

    int n = 0 ;
    while(!feof(fp))
    {
        copy[n++] = fgetc(fp);
    }
    copy[n] = '\0';

    fclose(fp);

    FILE *ffp = fopen(target, "w");

    if(ffp == NULL)
    {
        printf(" Hedef Dosya Acilamadi...");
    }

    for(int i = 0; i < (strlen(copy) - 1); ++i)
    {
        putc(copy[i], ffp);
    }

    fclose(ffp);
    return 0;
}
