#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
// esnek arg�manl� fonksiyon �rnekleri...
// girilen say�lar�n ortalamas�n� hesaplama...
void ortalama (int n, ...){

va_list calc ;
va_start(calc,n) ;
int i,sum,ortalama_sonucu = 0 ;

for(i = 0; i < n; i++){
    sum = sum + va_arg(calc,int) ;
}
va_end(calc) ;
ortalama_sonucu = sum / n ;
printf("%d",ortalama_sonucu) ;
}


int main()
{
    ortalama(3, 1,2,3) ;
    return 0;
}
