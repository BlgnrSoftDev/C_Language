#include <stdio.h>
#include <stdlib.h>

int main()
{
    //BU �RNEK DO�RUSAL ARAMA ALGOR�TMASI �RNE��D�R..
    char secim;
    short int a,j=0;
    double dizi[100]={1};
    int sayi;
    for(short int i =1;i<=100;i++){
        dizi[i] = dizi[i-1]*2; //MATR�S�M�Z� �NCEK� ELEMANININ 2'�ER KATI �EKL�NDE DOLDURUYORUZ...
    }
    printf("Lutfen Aramak Istediginiz Sayiyi Giriniz:\t");
    scanf("%d",&sayi);  // KULLANICIDAN ARAMAK �STED��� SAYIYI ALIYORUZ..
    printf("\n");
    for( a=0;a<100;a++){
        if(dizi[a]==sayi){
            printf("---|Aranan Bilgi = %d,  %hi. Indiste bulunmustur.|---",sayi,a); // D�NG�Y� MATR�S BOYUTUNCA DEVAM ETT�R�YORUZ VE E�LE�ME �HT�MAL�N� DE�ERLEND�R�YORUZ...
            break;
        }
    }
    if(a==100 && dizi[100] != sayi ) // MATR�S�N BULUNAMAMA DURUMUNU DE�ERLEND�R�YORUZ..
        printf("---|Maalesef ki sayiniz matriste bulunamamistir....|---");

    printf("\n\nMatrisi tamamen goruntulemek ister misiniz evet='e' hayir='h :\t");
    scanf(" %c",&secim);
    if(secim=='e'|| secim=='E'){
        printf("\nMatris :\t");
        while(j<100){
            printf(" %.0Lf ,",dizi[j]);
            j++;
        }
    }
}
