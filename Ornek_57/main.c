#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("****************************************************************************************************************\n\n\n");
    char metin[100],cevap[5] ;
    short int i,j,k,s ;
    int konum[20],bosluk[30] ;
    printf("girilen metnin kac harften olustugunu bulma programi\n\n\n");

    printf("Sayilacak yeri belirlemek icin '//' yaziniz \n") ;
tekrar:
    printf("Lutfen metni giriniz:\t") ;
    gets(metin) ;

    for(i = 0,j = 0,s = 0;i < strlen(metin);i++){
        if(metin[i] == ' '){
            bosluk[s] = i ;
            s++ ;

        }

        if(metin[i] == '/'){
            konum[j] = i ;
            j++ ;

        }
    }

    if(j != 0){
    for(k=0;k < 20;k++){
        if(konum[k] + 1 == konum[k+1] ){       // '/' isaretinin ard arda yazýldýðýný bulmak için..
            printf("\nYazdiginiz cumle %d kelimeden olusmaktadir..",konum[k]-s) ;
            break ;
        }
      }
    }
    else if(j == 0)
        printf("karakter algilanmamistir.....") ;

    printf("\n Eger tekrar denemek istiyorsaniz 'evet' yaziniz...") ;
    gets(cevap) ;


    if(strcmp(cevap,"evet") == 0)
        goto tekrar ;
    else
        printf("\nprogrami kullandiginiz icin tesekkurler....") ;


    printf("\n\n\n\n****************************************************************************************************************\n");
    return 0;
}
