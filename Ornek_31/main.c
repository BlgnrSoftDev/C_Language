#include <stdio.h>
#include <stdlib.h>

int main()
{
    int basla,bitis,ka_toplam=0,m,n;
    printf("Kullanicinin girdigi degerler arasi sayilarýn kubunu hesaplayip ve toplayip yazdiran program!!\n\n");
    printf("baslangic degeri gir:\t");
    scanf("%d",&basla);
    printf("bitis degeri gir degeri gir:\t");
    scanf("%d",&bitis);

    for(int i=basla,j=bitis;i<=j;i++){
         ka_toplam=(i*i*i)+ka_toplam;
    }
    printf("\nToplam = %d\n\n\n",ka_toplam);

     //WHÝLE DONGUSU

    printf("Ayni ornegi while ile yapalim.\n");
    ka_toplam=0; // Bir ust dongude kullandigimiz icin toplam degiskenimizi sifirliyoruz..
     m=basla; //kullanicidan aldigimiz degeri bir sonraki dongude de kullanmak icin muhafaza edip baska degiskeni kullaniyoruz..
     n= bitis;
    while(m<=n){
         ka_toplam=(m*m*m)+ka_toplam;
         m++;
    }
    printf("Toplam = %d\n\n\n",ka_toplam);

    //DO WHÝLE DONGUSU

    printf("Ayni ornegi do while ile yapalim.\n");
    ka_toplam=0;
    do{

        ka_toplam=(basla*basla*basla)+ka_toplam;
        basla++;
    }while(basla<=bitis);

    printf("Toplam = %d\n\n\n",ka_toplam);
    return 0;
}
