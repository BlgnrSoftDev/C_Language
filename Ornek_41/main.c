#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Binary (ikili) arama algoritmasý.....
    int i,n,ara,orta,baslangic,son,dizi[100];
    printf("Dizinin Eleman Sayisini Seciniz:\t");
    scanf("%d",&n);
    for(i=0;i<=(n-1);i++){
        printf(" %d. sayiyi giriniz:\t",i+1);
        scanf("%d",&dizi[i]);

    }
    printf("Aranacak degeri giriniz:\t");
    scanf("%d",&ara);
    baslangic = 0;
    son = n - 1;
    orta= (baslangic+son)/2;
    while(baslangic<=son){
        if(ara>dizi[orta]){
            baslangic=orta+1;
        }
        else if(ara==dizi[orta]){
            printf("Aradiginiz deger --> %d, %d. indiste bulunmustur..",ara,orta);
            break;
        }
        else
            son=orta-1;
            orta=(baslangic+son)/2;

        if(baslangic>son)
            printf("Aradiginiz deger -->%d bulunamadi...",ara);

    }

    return 0;
}
