#include <stdio.h>
#include <stdlib.h>

int main()
{
//Klavyeden sayýsal deðer girme
//• Klavyeden maksimum 10 tane sayýsal deðer girilecektir.
//• Girilen sayýlar bir dizide saklanacaktýr.
//• Sayý girme iþlemi 0 girilene kadar devam edecektir.
//• 0 deðeri girildiði anda 0 sayýsý hariç girilen diðer tüm deðerler
//diziden okunarak ekrana yazdýrýlacaktýr.

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
