#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main fonksiyonuna 2 sayilik arguman vererek hesap makinesi yapma programi..

int main(int argc, char* argv[])
{
    int a, b ;
    float c, d ;
    if( argc == 3)
    {
        a = atoi(argv[1]) + atoi(argv[2]) ;
        b = atoi(argv[1]) - atoi(argv[2]) ;
        c = atof(argv[1]) * atof(argv[2]) ;
        d = atof(argv[1]) / atof(argv[2]) ;

        printf("toplam : %d\nFark : %d\nCarpim : %.2f\nBolum : %.2f",a,b,c,d) ;

    }

    else
    {
        printf("eksik ya da fazla parametre girimi!!!!!!!!!!") ;
    }
    return 0;
}
