#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dosyanýn þifrelenmesi, þifresinin çözülmesi.

int main()
{
    char pure[20], crypted[20];

    //printf(" Kaynak Dosyanin Adini Giriniz : \n==> ");
    //scanf("%s", pure);

    printf(" Sifrelenmis Dosyanin Adini Giriniz : \n==> ");
    scanf("%s", crypted);

    decrypt(crypted);
    //encrypt(pure);
    return 0;
}

void encrypt(char *f_name)
{
    char cpy[1000];
    FILE *fp = fopen(f_name, "r+");
    if(fp == NULL)
    {
        printf("Kaynak Dosya Acilamadi..");
        exit(1);
    }

    int n = 0;
    while(!feof(fp))
    {
        cpy[n++] = fgetc(fp);
    }
    cpy[n] = '\0';

    rewind(fp);

    for(int i = 0; i < strlen(cpy); ++i)
    {
        cpy[i] = ( cpy[i] + 33 ) % 256 ;
    }

    for(int i = 0; i < ( strlen(cpy) - 1 ); ++i)
    {
        putc(cpy[i], fp);
    }

    fclose(fp);
}


void decrypt(char *f_name2)
{
    char cpy2[1000];
    FILE *fpp = fopen(f_name2, "r+");
    if(fpp == NULL)
    {
        printf("Sifrelenmis dosya acilamadi..");
        exit(1);
    }

    int m = 0;
    while(!feof(fpp))
    {
        cpy2[m++] = fgetc(fpp);
    }
    cpy2[m] = '\0' ;

    rewind(fpp);

    for(int i = 0; i < strlen(cpy2); ++i)
    {
        cpy2[i] = ( cpy2[i] - 33 ) % 256 ;
    }

    for(int i = 0; i < ( strlen(cpy2) - 1 ); ++i)
    {
        putc(cpy2[i], fpp);
    }

    fclose(fpp);
}
