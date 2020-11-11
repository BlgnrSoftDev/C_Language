#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,kontrol=0,data,dizi[101];

    for(i=0;i<=100;i++){
        dizi[i]=i*2; //Dizimizi doldurduk.
    }
    printf("Lutfen Aranacak Degeri Giriniz:\t");
    scanf("%d",&data); // Dizide Aranacak Deðeri Kullanýcýdan Aldýk

    if(dizi[51]==data){
        printf("Aradiginiz Deger %d, 51. Indiste Bulunmustur");
    }

      else  if(data>dizi[51]){
            for(j=52;j<=100;j++){
                if(dizi[j]==data){
                    kontrol=1;
                    break;
                }
            }

            if(kontrol==1){
                printf("Aradiginiz Deger %d, %d. Indiste Bulunmustur",data,j);
            }

            }
        else{
            for(k=0;k<=50;k++){
                if(dizi[k]==data){
                    kontrol=1;
                    break;
                }
            }
            if(kontrol==1){
                printf("Aradiginiz Deger %d, %d. Indiste Bulunmustur",data,k);
            }
        }
        if(kontrol==0){
            printf("Aradiginiz Deger Bulunamadý.....");
        }
        printf("\n");
        printf("\nDizi Tam Sirali:\n");

        for(int o=0;o<=100;o++){
            printf(" %d, ",dizi[o]);
        }



    return 0;
    }

