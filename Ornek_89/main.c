#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// recursive fonksiyon ile girilen metnin ters çevrilmesi...
//
int main()
{
    // kullanicidan alinan metni terse ceviren programm
    char text[250] ;
    int a;
    printf("   Enter some text here : \n\n====> ");
    gets(text) ;

    a = strlen(text) - 1;
    printf("\n\n   this is the reverse form of text :\n\n====> ") ;
    reverse_text(text,a);
    printf("\n\n\n") ;
    printf("===================> Created by BlgnrSoftDev <=====================") ;
    return 0;
}

void reverse_text(char x[], int indis)
{

if(indis == -1 )
{
    return 0 ;
}
else
{
    printf("%c",x[indis]) ;
    return reverse_text(x,--indis) ;
}


}
