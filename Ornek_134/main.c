#include <stdio.h>
#include <stdlib.h>

/*
fputc() fonksiyonunu kullanarak, ‘a’ karakterini
dosyaya yazýnýz.
• fgetc() fonksiyonunu kullanarak ‘a’ karakterini
dosyadan okuyunuz ve ekrana yazdýrýnýz
*/
int main()
{
    FILE *dosya ;
    dosya = fopen("belge.txt", "w");

    if(dosya == NULL)
    {
        printf("file couldn't  open!!! ");
        exit(1);
    }
    else
    {
        int ret_val = fputc('A', dosya);
        printf("Dosyaya Yazilan deger : '%c', Ascii : %d ", ret_val, ret_val);

    }

    fclose(dosya);

    dosya = fopen("belge.txt", "r");
    if(dosya == NULL)
    {
        printf("file couldn't read!!");
        exit(1);
    }

    else
    {
        int ret_val2 = fgetc(dosya);
        printf("\n\nThe character which was read is : '%c' \n\n", ret_val2);
    }

    fclose(dosya);
    return 0;
}
