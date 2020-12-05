#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Girilen bir metnin içinde baska bir metin arama programı...

void ara(char a[],char b[]);
void imza (void) ;

int main()
{
    char metin1[100],metin2[15] ;

    printf("---------------------------------------------------------------------------------------\n\n") ;

    printf("1. metni giriniz :\t") ;
    gets(metin1) ;

    printf("Aranacak metni giriniz :\t") ;
    gets(metin2) ;

    ara(metin1,metin2) ;
    printf("\n\n\n---------------------------------------------------------------------------------\n") ;

    return 0;
}

void ara(char a[],char b[]){
int konum[10],i = 0,f = 0,m = 0,j = 0,h,sayac = 0;
char kontrol[15] ;
do{
    h = j ;
    i = 0 ;
    while(i < strlen(b)){
    kontrol[i] = a[j] ;
    i++ ;
    j++ ;
    }
    j = h ;
    if(strcmp(kontrol,b) == 0){
        konum[m] = j ;
        j++ ;
        f = 1 ;
        m++ ;
        sayac ++ ;
    }
    else{
        if(j < strlen(a)-strlen(b))
            j++ ;
        else
            break ;
    }

}while(1);

if (f == 1){
    printf("\n\nAradiginiz metnin bulundugu indisler: \n") ;
    for(int k = 0;k < sayac;k++){
        printf("%d ile %d arasi ,\n",konum[k],konum[k] + strlen(b) - 1) ;
    }
    printf("\n\nIlk metin : %s \n",a) ;
    printf("Aradiginiz metin : %s",b) ;

}
else
    printf("\nMaalesef aradiginiz metin bulunamadi....") ;

    imza() ;
}


void imza (void){
printf("\n\n\n--------------------------------------> Created By BlgnrSoftDev  ^_^ <--------------- ") ;
}

