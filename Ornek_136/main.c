#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* kullanýcýdan alýnan metni dosyaya yazma ve sonrasýnda metindeki harfleri sondan baþa ters çevirilmiþ þekilde yazdýrma...
mesela ;
  huseyin ==> niyesuh yapacaðýz...

  */
int main()
{
    char text[51], name[20];

    printf("Dosyanin adini giriniz : ");
    gets(name);

    printf("Lutfen metni giriniz : ");
    gets(text);

    FILE *fp = fopen(name, "w+");

    if(fp == NULL)
    {
        printf("Dosya acilamadi!\n");
    }

    else
    {
        fprintf(fp, text);
        fseek(fp, -1, SEEK_CUR);

        for(int i = 0; i < strlen(text) ; ++i)
        {
            text[i] = fgetc(fp);
            fseek(fp, -2, SEEK_CUR);
        }

        printf("Sonuc : %s\n", text);
    }

    fclose(fp);
    return 0;
}
