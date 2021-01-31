#include <stdio.h>
#include <stdlib.h>

// dosyaya metin yazıp okuma islemleri...

int main()
{
    char metin[35];

    printf("Yazýlacak metni giriniz : ");
    gets(metin);

    char *tp = metin ;

    FILE *fp = fopen("dosya.txt", "w+");

    if(fp == NULL)
    {
        printf("Dosya acilamadi...");
        exit(1);
    }


    while(*tp)
    {
        if( fputc(*tp, fp) == EOF )
        {
            printf("dosya yazma hatasý!!");
            exit(1);
        }

        tp++ ;
    }


    rewind(fp);
    int i ;
    while((i = fgetc(fp)) != EOF)
    {
        putchar(i);
    }


    fclose(fp);
    return 0;
}
