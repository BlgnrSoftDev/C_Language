#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Merhabalar Kullan�c�dan ald��� de�erler dizisinin her bir indisdeki de�er i�in yanina o kadar yildiz bastirilmas� �rne�idir.
    short int i,j,numbers[5];
    for(i=0;i<5;i++){
            printf("Lutfen %hi. sayiyi giriniz:\t",i+1);  //Kullan�c�dan say�lar� ald�k.
            scanf("%hi",&numbers[i]);

    }
    printf("\n"); // estetik durmas� i�in bir sat�r atl�yorum
    for(i=0;i<5;i++){
        j=numbers[i];
        printf("%hi. sayiniz: %5.hi | ",i+1,numbers[i]);  // Ald���m�z say�lar� ekrana bast�rd�k  ve yan�na de�eri kadar y�ld�z koyduk.
        for(int m=1;m<=j;m++){
            printf("*");
        }
            printf("\n");
    }



    return 0;
}
