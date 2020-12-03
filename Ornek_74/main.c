#include <stdio.h>

#include <stdlib.h>

#include <math.h>



int main()

{

    int sayi,bilesen,j = 0,m = 0,armstrong = 0;

    short int bilesenler[50] ;



    printf("1 ile 1000 arasý Armstrong sayilari bulma algoritmasi\n\n") ;



    for( int i = 1;i < 1000;i++){
        sayi = i ;
        m = 0 ;
        j = 0 ;

        armstrong = 0 ;

        while(sayi != 0){

            bilesen = sayi % 10 ;

            bilesenler[m++] = bilesen ;

            sayi /= 10 ;



        }

        while(j < m){

            armstrong += pow(bilesenler[j],3) ;

            j++ ;



        }

        if(armstrong == i)

            printf(" %d, ",i) ;



    }



    return 0;

}

