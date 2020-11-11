#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Merhabalar Kullanýcýdan aldýðý deðerler dizisinin her bir indisdeki deðer için yanina o kadar yildiz bastirilmasý örneðidir.
    short int i,j,numbers[5];
    for(i=0;i<5;i++){
            printf("Lutfen %hi. sayiyi giriniz:\t",i+1);  //Kullanýcýdan sayýlarý aldýk.
            scanf("%hi",&numbers[i]);

    }
    printf("\n"); // estetik durmasý için bir satýr atlýyorum
    for(i=0;i<5;i++){
        j=numbers[i];
        printf("%hi. sayiniz: %5.hi | ",i+1,numbers[i]);  // Aldýðýmýz sayýlarý ekrana bastýrdýk  ve yanýna deðeri kadar yýldýz koyduk.
        for(int m=1;m<=j;m++){
            printf("*");
        }
            printf("\n");
    }



    return 0;
}
