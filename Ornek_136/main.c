#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* kullan�c�dan al�nan metni dosyaya yazma ve sonras�nda metindeki harfleri sondan ba�a ters �evirilmi� �ekilde yazd�rma...
mesela ;
  huseyin ==> niyesuh yapaca��z...

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
