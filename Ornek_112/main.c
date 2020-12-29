#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Girilen bir karakter dizisinin istenilen pozisyondan itibaren
istenilen karakter sayýsý kadar kopyalanmasýný saðlayan C
programýný yazýnýz.
1. 100 elemanlý dizi isimli bir karakter dizisi tanýmlanacaktýr.
2. Ýlk olarak klavyeden bir karakter dizisi girilecektir. Burada
gets() fonksiyonu kullanýlarak dizi doldurulacaktýr.
3. Daha sonra dizinin hangi karakterden itibaren kopyalanacaðý
bilgisi okunarak, sayýsal pozisyon deðiþkenine atanacaktýr.
4. Daha sonra kopyalanacak karakter sayýsý girilecek ve sayýsal
uzunluk deðiþkenine atanacaktýr.
5. Prototipi aþaðýdaki gibi olan bir fonksiyon yazýlarak
kopyalanan deðer ekranda gösterilecektir.

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
