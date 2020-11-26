#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char cumle[100] ;
    int bosluk[100],i,sayac,j,x ;

    printf("girilen cumlenin kelimelerin ilk harfini buyuk yapma programý\n\n\n\n");
    printf("Lutfen cumleyi giriniz:\t") ;
    gets(cumle) ;

     x = strlen(cumle) ;
     cumle[0] = toupper(cumle[0]);

    for(i = 0,sayac = 0;i <= (x-1);i++){
        if(cumle[i] == ' '){
                bosluk[sayac++] = i ;
        }
    }

    for(j = 0;j<sayac;j++){
        cumle[bosluk[j]+1] = toupper(cumle[bosluk[j]+1]);
    }
    printf(cumle);


    return 0;
}
