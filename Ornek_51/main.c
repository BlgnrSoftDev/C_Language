#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,l,k,sayac,kontrol=0,kontrol2=0,kontrol3=0,asal_sayilar[95],ciftsayi,num1,num2;

    for(i=2,sayac=0;i<500;i++){   // ******************
        for(j=2;j<=i;j++){        // BURADA  ÝLK 500 SAYIYA KADAR OLAN ASALLARI DÝZÝYE AKTARDIK..
            if(i%j==0){           // ******************
                kontrol=1;
                break;
            }
        }
        if(i==j && kontrol==1){
            asal_sayilar[sayac]=i;
            if(sayac==94){
                break;
            }
            sayac++;
        }


    }
    printf("********************************************************************************************************\n\n");
    printf("Kullanicidan alinan cift sayiyi iki asal sayi toplami seklinde yazdirilma programi\n\n\n");
    printf("Lutfen cift sayiyi giriniz:\t");     //BURADA ÇÝFT SAYIYI KULLANICIDAN ALDIK
    scanf("%d",&ciftsayi);


    for( k=0;k<95;k++){
        num1 = asal_sayilar[k];              // BURADA ÝKÝ ASAL SAYI ÞEKLÝNDE YAZIMI KODLADIM.
        for( l=0;l<95;l++){
            num2 = asal_sayilar[l];
            if(num1+num2 == ciftsayi){
                kontrol2=1; //  iki asalýn toplamý cift sayýyý verip vermediðini kontrol eder.
                break;
            }
        }
        if(kontrol2 == 1){
            printf("|------>\t%d + %d = %d\t<-----|\n",num1,num2,ciftsayi);
            kontrol3=1; // iki asal sayý þeklinde yazýlamadýðýnda kontrolünü yapar
            break;
        }
    }

    if(kontrol3==0){
        printf("Maalesef iki asal sayinin toplami seklinde yazilamamistir...\n\n");
    }

    printf("\n\n\n***************************************************************************************");






    return 0;
}
