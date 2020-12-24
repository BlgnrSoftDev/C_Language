#include <stdio.h>
#include <stdlib.h>
/* main fonksiyonu i�erisinde int t�r�ndeki x de�i�kenine
55 de�erine atayan.
� A�a��daki fonksiyonlar� yaz�n.
void f1(int n);
void f2(int *n);
� f1 fonksiyonu kendisine gelen n de�i�kenine 66 de�erini
atas�n, f2 fonksiyonu kendisine gelen n i�aret�isine 77
de�erini atas�n.
� main i�erisinde f1 ve f2 fonksiyonlar�n� �a��rarak x�i
parametre olarak ge�irin.
� f2 fonksiyonuna f2(&x); olarak parametre ge�irilecektir.
� Her fonksiyon �a��r�m� sonras�nda main fonksiyonu
i�erisinde x de�i�kenini yazd�r�n.*/
void f1(int n);
void f2(int *n);

int main()
{
    int x = 0 ;
    printf("before running functions, x ==> %d\n",x);
    f1(x);
    printf("after f1, x ==> %d\n",x) ;
    f2(&x);
    printf("after f2, x ==> %d\n",x) ;
    return 0;
}

void f1(int n)
{
    n = 66 ;
}

void f2(int *n)
{
    *n = 77 ;
}
