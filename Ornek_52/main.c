#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ad[15],soyad[15];
    printf("1. metni giriniz:\t");
    gets(ad);
    printf("2. metni giriniz:\t");
    gets(soyad);

    strcat(ad,soyad);
    puts(ad);


    return 0;
}
