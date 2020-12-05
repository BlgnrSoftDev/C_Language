
#include <stdio.h>
#include <stdlib.h>
  // iki sayý dizisini karþýlaþtýrma programý...
int main()
{

    int dizi[6] = {45, 87, 26, 97, 48, 11};
    int aranan_dizi[3] = {48, 11, 0};


    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<3;j++)
        {
            if(dizi[i] == aranan_dizi[j])
            {
                i++;
                if(i>=6)
                {
                    break;
                }
                continue;
            }
            else
            {
                break;
            }

        }

        if(j==3)
        {
            printf("Aranan dizi bulundu!");
            break;
        }
    }

    if(j!=3)
    {
        printf("Aranan dizi bulunamadi!");
    }


    return 0;
}
