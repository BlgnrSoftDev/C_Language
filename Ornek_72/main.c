#include <stdio.h>
#include <stdlib.h>
// fonskiyon kullanarak 1 den girilen sayiya kadaar toplama programi...
int main()
{
    int sayi ;
    printf("1'den gireceginiz degere kadar toplam islemi\n\n") ;
    printf("ust degeri giriniz") ;
    scanf("%d",&sayi) ;
    printf("%d",toplam(sayi)) ;


    return 0;
}

int toplam(int a){
if(a == 1)
    return 1;
else if (a > 1)
    return a + toplam(a-1) ;
else
    return 0 ;

}
