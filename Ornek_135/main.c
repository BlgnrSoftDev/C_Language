#include <stdio.h>
#include <stdlib.h>

/*
 fputc() fonksiyonunu kullanarak, her defasýnda bir
karakter olmak üzere, 10 adet 'a' harfini (w) modunda
açýlan dosyaya yazar.
• Bu iþlemi bitirdikten sonra, dosyayý kapatýr.
• Dosyayý (r) modunda açtýktan sonra, her karakteri
birer birer dosyadan okuyarak ekrana yazar.

NOT : ORNEK MODÝFÝYE EDÝLMÝSTÝR VE ÝKÝ DEFA DOSYA ACMAK YERÝNE TEK SEFERDE AYNI ÝSLEMÝ YAPMISTIR....
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
