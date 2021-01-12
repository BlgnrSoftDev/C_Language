#include <stdio.h>
#include <stdlib.h>
//sýfýrdan dosya yaratmak....
int main()
{
    FILE *fp ;
    fp = fopen("hangiyildayiz.txt","w+");

    if(fp == NULL)
    {
        printf("Dosya olusturulamadi..");
    }
    else
    {
        fprintf(fp,"2020 yilindayiz...");
    }

    fclose(fp);
    return 0;
}
