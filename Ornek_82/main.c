#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
//esnek argümanlý fonksiyonlar kullanýmý...
//girilen 10 sayinin en kucugunu hesaplma...
int kucukbul (int , ...);
int main()
{
    int dizi[10] ;
    for(int j = 0;j < 10;j++){
        printf("%d . sayiyi giriniz:\t",j + 1) ;
        scanf("%d",&dizi[j]) ;
    }
    printf("\nEn kucuk sayi => ") ;
    printf("%d",kucukbul(10, dizi[0],dizi[1],dizi[2],dizi[3],dizi[4],dizi[5],dizi[6],dizi[7],dizi[8],dizi[9])) ;
    return 0;
}

int kucukbul (int n, ...) {
va_list ls ;
int ilk,diger ;
va_start(ls,n) ;

ilk = va_arg(ls,int) ;

for(int m = 0;m < n - 1;++m){
    diger = va_arg(ls,int) ;
    if(ilk > diger)
        ilk = diger ;
}

va_end(ls) ;
return ilk ;
}
