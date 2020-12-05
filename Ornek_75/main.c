#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Iki boyutlu bir char dizisinin icinde tek boyutlu char diizisini aramak ve eger varsa konumlarini cikti olarak yazdirma programi
void ayristirici(int a,int b,char c[]) ;
int main(){

char dizi[5][20]={"Benim",
                  "Adim",
                  "Huseyin",
                  "Bilginer",
                  "ulan"};


char aranacakkelime[20] ;
int kontrol,sondeger,calisti = 0;

printf("Lutfen arayacaginiz kelimeyi giriniz :\t");
gets(aranacakkelime) ;

for(int i = 0;i < 5;i++){
    kontrol = 0 ;
    for(int j = 0;j < strlen(aranacakkelime);j++){
        if(aranacakkelime[j] == dizi[i][j] ){
            kontrol++;
            sondeger = j ;
        }
        else{
            break ;
        }
        }
    if(kontrol == strlen(aranacakkelime)){
        calisti = 1 ;
        ayristirici(i,sondeger,aranacakkelime) ;
        break ;
    }
    }

if(calisti == 0)
        printf("aradiginiz kelime bulunamamistir.... :( ") ;


 imza();
    return 0 ;
}


void ayristirici(int a,int b,char c[]){
printf("Aradiginiz kelime bulunmustur!! olleyy\n\n") ;
printf("Sirasiyla aradiginiz kelimenin harflerinin konumlari :\n") ;
for(int m = 0;m < b+1;m++){
    printf("%c . harf dizinin %d satirinin %d. sutunundadir. \n",c[m],a+1,m+1) ;
}
}


void imza (void){
printf("\n\n\n--------------------------------------> BlgnrSoftDev was here  ^_^ <--------------- ") ;
}
