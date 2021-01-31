#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Dosyada her harfin kaç defa geçtiğini bulup, çoktan aza doğru sıralama.......
int main()
{
    char text[250], name[20];

    printf("\nDosyanin adini giriniz :\n ==> ");
    gets(name);

    printf("\nEkleyeceginiz metini giriniz :\n ==> ");
    gets(text);

    FILE *fp = fopen(name, "w+");

    if(fp == NULL)
    {
        printf("Dosyayi acamadik...");
        exit(1);
    }

    fprintf(fp, text);

    rewind(fp);

    char ctrl, Letters[26];
    int Frequencies[26];

    for(int i = 0; i < 26; ++i)
    {
        Frequencies[i] = 0 ;
    }

    for(char i = 'a'; i <= 'z'; ++i)
    {
        Letters[i-97] = i ;
    }

    while(feof(fp) == 0 )
    {
        ctrl = fgetc(fp);
        for(int j = 0; j < 26; ++j)
        {
            if(ctrl == Letters[j])
            {
                Frequencies[j] += 1 ;
            }
        }
    }


    int sort[26], Frequencies_1[26], m, maxval = 0, loc;

    for(int i = 0; i < 26; ++i)
    {
        Frequencies_1[i] = Frequencies[i];
    }

    for(int i = 0; i < 26; ++i)
    {
        for(int j = 0; j < 26; ++j)
        {
            if(Frequencies_1[j] > maxval)
            {
                maxval = Frequencies_1[j];
                loc = j ;
            }
        }
        maxval = -1;
        sort[i] = loc;
        Frequencies_1[loc] = -1;
    }

    printf("\n==> Hesaplaniyor...\n");

    printf("\n==============================[ ISTATISTIKLER ]===================================\n\n");
    for(int i = 0, l; i < 26; ++i)
    {
        printf("==>  '%c' harfi %d defa gecmistir...\n\n", Letters[sort[i]], Frequencies[sort[i]]);
    }
    printf("======================================================================================");


    fclose(fp);
    return 0;
}
