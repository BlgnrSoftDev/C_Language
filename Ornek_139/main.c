#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Dosyadaki bir harfi baþka bir harf ile deðiþtirme.....

int main()
{
    char name[20], base, target;
    printf(" Dosyanin adini giriniz : \n==> ");
    scanf("%s", name);
    fflush(stdin);

    printf(" Degistirilecek harfi giriniz :\n==> ");
    scanf("%c", &base);
    fflush(stdin);

    printf(" Hedef harfi giriniz :\n==> ");
    scanf("%c", &target);
    fflush(stdin);

    FILE *fp = fopen(name, "r+");

    if(fp == NULL)
    {
        printf("Dosya acilamadi!!");
        exit(1);
    }

    char copy[1000];
    int n = 0;
    while(!feof(fp))
    {
        copy[n++] = fgetc(fp);
    }
    copy[n] = '\0' ;

    for(int i = 0; i < strlen(copy); ++i)
    {
        if(copy[i] == target)
        {
            copy[i] = base ;
        }
    }

    rewind(fp);

    for(int i = 0; i < (strlen(copy) - 1) ; ++i)
    {
        fputc(copy[i], fp);
    }


    fclose(fp);
    return 0;
}
