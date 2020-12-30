#include <stdio.h>
#include <stdlib.h>

// Memset kullanýmý...
int main()
{
    int size ;
    printf("Kac karakterli metin gireceksiniz ? :\t") ;
    scanf("%d",&size) ;
    fflush(stdin) ;
    char *text = (char *) malloc(sizeof(char) * size) ;
    printf("\nmetni giriniz :\t") ;
    scanf("%s",text) ;
    printf(" before ;\n ==> %s\n\n",text) ;
    text = (char *) memset(text,'*',5) ;
    printf(" after ;\n ==> %s\n\n",text) ;
    return 0;
}
