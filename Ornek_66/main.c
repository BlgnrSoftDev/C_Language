#include <stdio.h>
#include <stdlib.h>

void cizim(int uzunluk,int genislik) ;

int main()
{
    int uz,gen ;

    printf("dikdortgen cizim ornegine hosgeldiniz...\n\n\n") ;

    printf("dikdortgen uzunlugu giriniz (yildiz cinsinden) :\t") ;
    scanf("%d",&uz) ;

    printf("dikdortgen genisligini giriniz (yildiz cinsinden) :\t") ;
    scanf("%d",&gen) ;

    cizim(uz,gen) ;

    return 0;
}

void cizim(int uzunluk,int genislik) {   //Void fonksiyon ornegi........
for(int i = 0;i < uzunluk;i++){          //return kullanm�yoruz....
    for(int j = 0;j < genislik;j++)      // parametre aktar�m� yapabilriz....
        printf("*") ;
    printf("\n") ;
    }

}
