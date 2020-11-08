#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int j,i;
    printf("Sayac programýna hosgeldiniz:\n");

    for( i=0;i<60;i++){

        for( j=0;j<60;j++){ //Burada sayacýn saniye kýsmýnýn gösterilmesini ayarlýyoruz.
                if(j<10){
                        if(i<10)
                           printf("0%d:0%d\n",i,j);
                        else
                           printf("%2.0d:0%d\n",i,j);
                }
                else {
                    if(i<10)
                    printf("0%d:%2.0d\n",i,j);
                else
                    printf("%2.0d:%2.0d\n",i,j);
                    }
                    Sleep(1000); // 1 saniye'de bir yazar

        }
        if(i==59&&j==60)
            j=59;


        if(i<10){  //burada ise dakika kýsmýnýn gösterilmesini ayarlýyoruz.
                if(j<10)
                   printf("0%d:0%d\n",i,j);
                else
                   printf("0%d:%2.0d\n",i,j);
        }
        else {
            if(j<10)
                printf("%2.0d:0%d\n",i,j);
            else
                printf("%2.0d:%2.0d\n",i,j);
        }




    }
    return 0;
}
