#include <stdio.h>
#include <stdlib.h>

/*
 fputc() fonksiyonunu kullanarak, her defas�nda bir
karakter olmak �zere, 10 adet 'a' harfini (w) modunda
a��lan dosyaya yazar.
� Bu i�lemi bitirdikten sonra, dosyay� kapat�r.
� Dosyay� (r) modunda a�t�ktan sonra, her karakteri
birer birer dosyadan okuyarak ekrana yazar.

NOT : ORNEK MOD�F�YE ED�LM�ST�R VE �K� DEFA DOSYA ACMAK YER�NE TEK SEFERDE AYNI �SLEM� YAPMISTIR....
*/
int main()
{
    char name[20];
    printf("Olusturulacak dosyanin adini giriniz : ");
    gets(name);

    FILE* fp;
    fp = fopen(name, "w+");

    if(fp == NULL)
    {
        printf("\nDosya acilamadi.\n");
    }
    else
    {
        int ctrl ;
        for(int i = 0; i < 10; ++i)
        {
            ctrl = fputc('a', fp);
            if(ctrl == EOF)
            {
                printf("\nDosyaya karakter yazilamadi.");
                exit(1);
            }
        }
        printf("\n       ------OKUNAN DEGERLER------      \n\n==> '");
        int donus ;
        rewind(fp);
        for(int i = 0; i < 10; ++i)
        {
            donus = fgetc(fp);
            printf("%c",donus);
        }
        printf("'\n\n");
    }



    fclose(fp);
    return 0;
}
