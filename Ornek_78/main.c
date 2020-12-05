#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Girilen bir metnin içinde baska bir metin arama programý versiyon2 >_< ..........
void ara(char x[],char y[]){
    int indis[51],i,j,sayac = 0 ;

    for(i=0;i<strlen(x)-strlen(y)+1;i++){

        for(j=0;j<strlen(y);j++){
            if(x[i+j]!=y[j]){
                break;
            }

        }
        if(j == strlen(y)){
            indis[sayac++] = i ;
        }
    }

    indis[sayac] = -1 ;

    printf("bulunan indisler: ");
    sayac = 0;
    while(indis[sayac]!=-1){
        printf("%d,",indis[sayac]);
        sayac++ ;
    }

}




int main()
{
    char metin1[51],metin2[51] ;
    printf("Ilk metni gir: ") ;
    gets(metin1) ;
    printf("Ikinci metni gir: ") ;
    gets(metin2) ;
    ara(metin1,metin2) ;
    return 0;
}
