#include <stdio.h>
#include <stdlib.h>
 //Dongulerl ile Ucgen basmak.......
int main()
{

    int satir_sayisi ,bosluk_sayisi  ,yildiz_sayisi =1, toplam_yildiz = 0,sayac = 0 ;
    char cevap ;

    printf("satir sayisini giriniz:\t") ;
    scanf("%d",&satir_sayisi) ;
    fflush(stdin) ;

    bosluk_sayisi = satir_sayisi ;
    for(int x  = 0;x < satir_sayisi;x++){

        for(int y = 0;y < bosluk_sayisi;y++ ){
            printf(" ") ;
        }

        for(int z = 0;z < yildiz_sayisi;z++){
            printf("*") ;
        }

        printf("\n") ;

        bosluk_sayisi -- ;
        yildiz_sayisi += 2;
    }

    printf("Kac yildiz bastirildigini ogrenmek ister misiniz? (evet = 'e' hayýr = 'h') :\t") ;
    scanf(" %c",&cevap) ;
    if (cevap == 'e'){
        for(int i = 1;1;i+=2){
            toplam_yildiz += i ;
            sayac++ ;
            if(sayac == satir_sayisi)
                break ;

        }
        printf("%d tane yildiz kullanilmistir",toplam_yildiz ) ;

    }
    return 0;
}
