#include <stdio.h>
#include <stdlib.h>

int main()
{
//Klavyeden say�sal de�er girme
//� Klavyeden maksimum 10 tane say�sal de�er girilecektir.
//� Girilen say�lar bir dizide saklanacakt�r.
//� Say� girme i�lemi 0 girilene kadar devam edecektir.
//� 0 de�eri girildi�i anda 0 say�s� hari� girilen di�er t�m de�erler
//diziden okunarak ekrana yazd�r�lacakt�r.

    int i,kullanici[10],j = 0;

    for(i=0;i<10;i++){
        printf("%d. sayiyi giriniz.",i+1);
        scanf("%d",&kullanici[i]);
        if(kullanici[i]==0)
            break;
    }
    printf("Girdiginiz degerler = ");
    while(j<i){
        printf("%d,",kullanici[j]);
        j++;
    }
    return 0;
}
