#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// dosyanin icinde kelime arama ve yerlerini tespit edip kac adet gectigini bulma......


int main()
{
    char file_n[20], word[20], str[1000];

    printf("1-) Arama yapilacak dosyanin adini giriniz : \n\n==> ");
    scanf("%s", file_n);

    printf("\n2-) Aranacak Kelimeyi Giriniz : \n\n==> ");
    scanf("%s", word);

    FILE *fp = fopen(file_n, "r+");

    if(fp == NULL)
    {
        printf("Dosya acilamadi...");
        sleep(3);
        exit(1);
    }

    int m = 0;
    while(!feof(fp))
    {
        str[m++] = fgetc(fp);
    }
    str[m] = '\0' ;

    int ctrl, sayac = 0, location[50], s = 0 ;
    for(int i = 0; i < ( strlen(str) - strlen(word) + 1 ) ; ++i )
    {
        ctrl = 0 ;
        for(int j = 0, n = i; j < strlen(word); ++j )
        {
            if(str[n++] == word[j])
            {
                ctrl++ ;

            }
        }

        if(ctrl == strlen(word))
        {
            sayac++ ;
            location[s++] = i;
        }

    }

    printf("\n==============================[ TOTAL ]===================================\n\n\n");
    printf("3-) Konumlar : \n\n==> { ");
    for(int k = 0; k < s; ++k)
    {
        printf("%d - %d index , ", location[k], ( location[k] + strlen(word) - 1 ) );
    }
    printf(" } \n");

    printf("\n4-) Sayac : \n\n==> { %d } \n", sayac);
    fclose(fp);
    return 0;
}
