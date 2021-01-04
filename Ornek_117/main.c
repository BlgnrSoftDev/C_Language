#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//kullanicidan alinan iki metnin birlestirilmesi....

int main()
{
    char text[100], text2[100] ;

    printf(" Ilk metni giriniz :\t") ;
    gets(text) ;

    printf(" Ikinci metni giriniz :\t") ;
    gets(text2) ;

    char* unite = (char *) malloc(sizeof(char) * 200) ;

    strcpy(unite, text) ;
    strcat(unite, text2) ;

    printf(" Birlestirilmis metin : ") ;
    puts(unite) ;

    free(unite) ;


    return 0;
}
