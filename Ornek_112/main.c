#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Girilen bir karakter dizisinin istenilen pozisyondan itibaren
istenilen karakter say�s� kadar kopyalanmas�n� sa�layan C
program�n� yaz�n�z.
1. 100 elemanl� dizi isimli bir karakter dizisi tan�mlanacakt�r.
2. �lk olarak klavyeden bir karakter dizisi girilecektir. Burada
gets() fonksiyonu kullan�larak dizi doldurulacakt�r.
3. Daha sonra dizinin hangi karakterden itibaren kopyalanaca��
bilgisi okunarak, say�sal pozisyon de�i�kenine atanacakt�r.
4. Daha sonra kopyalanacak karakter say�s� girilecek ve say�sal
uzunluk de�i�kenine atanacakt�r.
5. Prototipi a�a��daki gibi olan bir fonksiyon yaz�larak
kopyalanan de�er ekranda g�sterilecektir.

char *SubString(char *dizikopya, int pozisyon, int uzunluk)*/

char *SubString(char *dizikopya, int pozisyon, int uzunluk) ;
char *copy ;
void main(void)
{
    char text[100] ;
    int pozisyon,uzunluk ;
    printf("Lutfen bir metin giriniz :\t") ;
    gets(text) ;
    printf("\nHangi kopyalama pozisyonunu giriniz :\t") ;
    scanf("%d", &pozisyon) ;
    printf("\nKopyalanacak karakter sayisi giriniz :\t") ;
    scanf("%d", &uzunluk) ;
    char* sonuc = SubString(text, pozisyon, uzunluk) ;
    printf("\n Total : \n\n ==> {\" %s \"}\n\n", sonuc) ;




}

char *SubString(char *dizikopya, int pozisyon, int uzunluk)
{
    copy = (char *) malloc(sizeof(char) * uzunluk) ;
    for(int i = 0; i < uzunluk; ++i, ++pozisyon)
    {
        *(copy + i) = *(dizikopya + (pozisyon - 1 ) ) ;
    }

    return copy ;
}
