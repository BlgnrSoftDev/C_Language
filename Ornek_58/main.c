#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("****************************************************************************************************************\n\n");
    printf("------Kelime bulma algoritmasi-----------------------------------------------\n\n\n") ;
    char cumle[100] = {},cumle_bolumu[15],ara[15] ;
    int j;

    printf("Lutfen cumleyi giriniz:\t") ;
    gets(cumle) ;

    printf("Lutfen aranacak kelimeyi giriniz:\t") ;
    gets(ara) ;

    j = 0 ;

atla:
    for(int i=0;i < strlen(ara);i++){
        cumle_bolumu[i] = cumle[j] ;
        j++ ;
    }

    while(1){
        if(strcmp(ara,cumle_bolumu) == 0){
            printf("aradiginiz kelime %d - %d indislerindedir...",(j-1)-(strlen(ara)-1),j-1) ;
            break;
        }
        else{
            j = (j-1)-(strlen(ara)-1) + 1 ;
            if( j > (100-strlen(ara))){
                printf("Maalesef aradiginiz kelime bulunamamistir..") ;
                break;
            }
            goto atla ;
        }
    }

    printf("\n\n\n\n****************************************************************************************************************\n");

    return 0;
}
