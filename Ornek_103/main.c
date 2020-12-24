#include <stdio.h>
#include <stdlib.h>
/* main fonksiyonu içerisinde int türündeki x deðiþkenine
55 deðerine atayan.
• Aþaðýdaki fonksiyonlarý yazýn.
void f1(int n);
void f2(int *n);
• f1 fonksiyonu kendisine gelen n deðiþkenine 66 deðerini
atasýn, f2 fonksiyonu kendisine gelen n iþaretçisine 77
deðerini atasýn.
• main içerisinde f1 ve f2 fonksiyonlarýný çaðýrarak x’i
parametre olarak geçirin.
• f2 fonksiyonuna f2(&x); olarak parametre geçirilecektir.
• Her fonksiyon çaðýrýmý sonrasýnda main fonksiyonu
içerisinde x deðiþkenini yazdýrýn.*/
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
