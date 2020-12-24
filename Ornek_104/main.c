#include <stdio.h>
#include <stdlib.h>

/*
• Adým 1: Klavyeden iki tamsayý giriniz.
• Adým 2: Bu sayýlardan büyük olanýný bulmak ve için
aþaðýdaki prototipte bir fonksiyon yazýnýz. main()
fonksiyonu içerisinde büyük olanýnýn deðerini ekrana
yazdýrýnýz.
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
