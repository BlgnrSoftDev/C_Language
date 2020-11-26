#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("****************************************************************************************************************\n\n\n");
    printf("Kullanicinin girdigi cumlede harf bulma ve yerini tespit etme\n\n");

    char cumle[100],ara;
    int konumlar[100],i,j,x,sayac;

    printf("Lutfen bir cumle giriniz:\t");
    gets(cumle);

    x = strlen(cumle) ;

    printf("Aranacak harfi giriniz:\t");
    scanf("%c",&ara);

    for(i=0,sayac=0;i<=(x-1);i++){
        if(cumle[i] == ara ){
                konumlar[sayac++] = i ;
        }
    }
    if(sayac>0){
    printf("\n\nAradiginiz harflerin bulunduðu indisler :\t ") ;

    for(int m=0;m<sayac;m++)
        printf("%d,",konumlar[m]);

    printf("\nAradiginiz harfin cumlede gecme sayisi:\t%d\n\n\n",sayac);

    }
    else
        printf("aradiginiz harf bulunamadi\n\n\n") ;

     printf("\n\n\n\n****************************************************************************************************************\n");
    return 0;
}
