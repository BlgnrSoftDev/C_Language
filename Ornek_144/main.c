#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// ASAGÝDA ÝMZASÝ VERÝLEN FONKSÝYON ÝLE 100 ELEMANLI BÝR DÝZÝ TANIMLAYIP VE ICINE 1-5 ARASI RASTGELE SAYILAR ILE DOLDURUP RECURSÝVE FONKSÝYON KULLANARAK, ILGILI DIZININ INDISLERI SIRAYKA TOPLANARAK, TOPLAMLARI YUZDEN KUCUK  EN BUYUK OLDUGU ZAMAN SON INDISIN KONUMUNU BUL FONKSIYONU ILE DONDURUNUZ.
int bul(int a[], int p);
void DiziYaz(int dizi[], int size);

int toplam = 0;
int main(void)
{
    srand(time(NULL));
    int dizi[100];

    for(int i = 0; i < 100; ++i)
    {
        dizi[i] = 1 + rand() % 5 ;
    }

    int c = bul(dizi, 0);
    DiziYaz(dizi, 100);
    printf("\n\n2-)Sonuc :\n\n==> Ilk %d Elemanin Toplami 100'den Kucuktur..  \n\n", c - 1);
    return 0;
}

int bul(int a[], int p)
{
    toplam += a[p];

    if(toplam > 100)
        return p;
    else
        return bul(a,p+1);

}

void DiziYaz(int dizi[], int size)
{
    printf("1-)Olusturulmus Dizi :\n\n==>  {");
    for(int i = 0; i < size; ++i)
    {
        printf(" %d,",dizi[i]);
        if(i % 8  == 7)
            printf("\n      ");
    }
    printf(" }");
}
