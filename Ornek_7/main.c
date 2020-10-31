#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Girilen sayı 10-50 arasındaysa ekrana yazdıran bir program
yazalım.
• 10’dan küçük olma ve 50’den büyük olma kontrollerini de
ekleyerek bu kontrollerin sonucunu da ekrana yazdıralım.
Örnek ekran çıktıları:
• 12"Girilen sayı 10-50 arasındadır"
• 9 "Girilen sayı 10’dan küçüktür"
• 51"Girilen sayı 50’den büyüktür"
Not: Uygulama dersinde programı yazacağız.*/

 int sayi=0;
 printf("Lutfen bir sayi giriniz.\t");
 scanf("%d",&sayi);
 printf("\n");
 if(sayi>=10 && sayi<=50)
    printf("Girilen sayi 10 ile 50 arasindadir...");
else if(sayi<10)
    printf("Girilen sayi 10'dan kucuktur...");
else
    printf("Girilen sayi 50'den buyuktur...");

    return 0;
}
