#include <stdio.h>
#include <stdlib.h>

/*
� Ad�m 1: Klavyeden iki tamsay� giriniz.
� Ad�m 2: Bu say�lardan b�y�k olan�n� bulmak ve i�in
a�a��daki prototipte bir fonksiyon yaz�n�z. main()
fonksiyonu i�erisinde b�y�k olan�n�n de�erini ekrana
yazd�r�n�z.
int *BuyukBul(int a, int b)*/

int *find_big_one(int a, int b) ;
int main()
{
    int a,b ;
    int *ptr ;
    printf(" Please enter first number ? :\t");
    scanf("%d", &a) ;
    printf(" Please enter second number ? :\t");
    scanf("%d", &b) ;

    ptr = find_big_one(a,b) ;
    printf(" The bigger number is : %d\n",*ptr) ;

    return 0;
}

int *find_big_one(int a, int b)
{
    return (a < b) ? &b : &a ;
}
