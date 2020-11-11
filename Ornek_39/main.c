#include <stdio.h>
#include <stdlib.h>

int main()
{
    //BU ÖRNEK DOÐRUSAL ARAMA ALGORÝTMASI ÖRNEÐÝDÝR..
    char secim;
    short int a,j=0;
    double dizi[100]={1};
    int sayi;
    for(short int i =1;i<=100;i++){
        dizi[i] = dizi[i-1]*2; //MATRÝSÝMÝZÝ ÖNCEKÝ ELEMANININ 2'ÞER KATI ÞEKLÝNDE DOLDURUYORUZ...
    }
    printf("Lutfen Aramak Istediginiz Sayiyi Giriniz:\t");
    scanf("%d",&sayi);  // KULLANICIDAN ARAMAK ÝSTEDÝÐÝ SAYIYI ALIYORUZ..
    printf("\n");
    for( a=0;a<100;a++){
        if(dizi[a]==sayi){
            printf("---|Aranan Bilgi = %d,  %hi. Indiste bulunmustur.|---",sayi,a); // DÖNGÜYÜ MATRÝS BOYUTUNCA DEVAM ETTÝRÝYORUZ VE EÞLEÞME ÝHTÝMALÝNÝ DEÐERLENDÝRÝYORUZ...
            break;
        }
    }
    if(a==100 && dizi[100] != sayi ) // MATRÝSÝN BULUNAMAMA DURUMUNU DEÐERLENDÝRÝYORUZ..
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
