#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Girilen bir karakter dizisinin istenilen pozisyondan itibaren
istenilen karakter sayýsý kadar kopyalanmasýný saðlayan C
programi v_2 */

char *SubString(char *dizikopya, int pozisyon, int uzunluk) ;

int main(void)
{
    char text[100] ;
    int position, len ;

    printf("Enter Text :\t") ;
    gets(text) ;

    printf("\nDizinin kopyalama isleminin baslangic pozisyonunu giriniz :\t") ;
    scanf("%d",&position) ;

    printf("\nKopyalanacak karakter sayisini giriniz :\t") ;
    scanf("%d",&len) ;

    char *text2 = (char *) calloc(strlen(text) + 1, sizeof(char)) ;
    strcpy(text2, text) ;
    char *total = SubString(text2, position, len) ;

    printf("\n\n Total ;\n\n ==> ") ;
    puts(total) ;
    free(text2) ;

}

char *SubString(char *dizikopya, int pozisyon, int uzunluk)
{
    char *temp = (char *) malloc(sizeof(char) * uzunluk) ;

    for(int i = 0, n = pozisyon - 1; i < uzunluk; ++i, ++n)
    {
        *(temp +  i) = *(dizikopya + n) ;
    }

    strcpy(dizikopya, temp) ;

    dizikopya = (char*) realloc(dizikopya, sizeof(char)* uzunluk) ;

    return dizikopya ;
}
