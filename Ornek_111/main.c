#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*� malloc() fonksiyonunu kullanarak 10 karakter
kapasiteli bir i�aret�i tan�mlay�n�z.
� Bu i�aret�iye strcpy() fonksiyonunu kullanarak
�Algoritma� de�erini atay�n�z.
� Bu i�aret�inin kapasitesini realloc(
fonksiyonunu kullanarak 25 karaktere ��kart�n.
� ��aret�inin sonuna strcat() fonksyionunu
kullanarak �veProgramlama� ekleyin ve ekrana
yazd�r�n.*/

void main(void)
{
    char* text = (char *) malloc( sizeof(char) * 10) ;
    strcpy(text, "Algoritma") ;
    text = (char *) realloc(text, sizeof(char)*25) ;
    strcat(text," ve Programlama") ;
    printf("%s, %p", text, text);
    free(text) ;



}
