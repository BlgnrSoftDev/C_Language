#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int ogrn_1[3],ogrn_2[3],ogrn_3[3],i;
    float ort1=0,ort2=0,ort3=0;
    for(i=0;i<3;){
        printf("1. ogrencinin %hi. notunu giriniz:\t",i+1);
        scanf("%hi",&ogrn_1[i]);
        printf("2. ogrencinin %hi. notunu giriniz:\t",i+1);
        scanf("%hi",&ogrn_2[i]);
        printf("3. ogrencinin %hi. notunu giriniz:\t",i+1);
        scanf("%hi",&ogrn_3[i]);
        ort1= ort1+ogrn_1[i];
        ort2= ort2+ogrn_2[i];
        ort3= ort3+ogrn_3[i];
        i++;
        if(i!=3)
            continue;
        printf("1. ogrenci notu : %.2f\n",ort1/3);
        printf("2. ogrenci notu : %.2f\n",ort2/3);
        printf("3. ogrenci notu : %.2f\n",ort3/3);
    }


    return 0;
}
