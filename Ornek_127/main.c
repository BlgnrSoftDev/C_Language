#include <stdio.h>
#include <stdlib.h>
//s�f�rdan dosya yaratmak....
int main()
{
    char dosyaadi[51];
    printf("Dosya adi giriniz: \n");
    gets(dosyaadi);

    FILE *ptr ;
    ptr = fopen(dosyaadi, "a+"); // buray� w+ veya w ile de yapabilirdik.

    if(ptr == NULL)
        printf("dosya acilamadi.");
    else
        fprintf(ptr,"BUGUN %d OCAK SALI",12);

    fclose(ptr);
    return 0;
}
