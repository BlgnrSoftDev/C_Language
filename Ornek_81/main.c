#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// esnek argümanlý fonksiyon kullanýmý...

int hesapla(int m, ...){

va_list ap ;
int i, toplam = 0 ;

va_start(ap,m) ;

for(i = 0; i < m; i++)
    toplam += va_arg(ap,int) ;


va_end(ap);

return toplam ;
}



int main(void)
{
    int sayilar[15], n, top ;

    printf("kac sayi gireceksiniz ? :\t");
    scanf("%d",&n) ;

    for(int i = 0;i < n;i++){
        printf("%d. sayiyi giriniz:\t",i + 1) ;
        scanf("%d",&sayilar[i]) ;
    }

    printf("%d",hesapla(2, sayilar[0],sayilar[1])) ;
    return 0;
}
