#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*• malloc() fonksiyonunu kullanarak 10 karakter
kapasiteli bir iþaretçi tanýmlayýnýz.
• Bu iþaretçiye strcpy() fonksiyonunu kullanarak
“Algoritma” deðerini atayýnýz.
• Bu iþaretçinin kapasitesini realloc(
fonksiyonunu kullanarak 25 karaktere çýkartýn.
• Ýþaretçinin sonuna strcat() fonksyionunu
kullanarak “veProgramlama” ekleyin ve ekrana
yazdýrýn.*/

void main(void)
{
    char* text = (char *) malloc( sizeof(char) * 10) ;
    strcpy(text, "Algoritma") ;
    text = (char *) realloc(text, sizeof(char)*25) ;
    strcat(text," ve Programlama") ;
    printf("%s, %p", text, text);
    free(text) ;



}
