#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Klavyeden girilen karakter dizisinin uzunlu�unun bulunmas�.
    char metin[20] = {};

    printf("Lutfen metni giriniz:");
    scanf("%s",metin);

    printf("%d",strlen(metin));
    puts(strrev(metin));
    return 0;
}
