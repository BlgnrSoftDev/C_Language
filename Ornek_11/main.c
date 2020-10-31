#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sonuc,x;
    printf("sayi giriniz:       \t");
    scanf("%d",&num1);
    printf("ikinci sayi giriniz:\t");
    scanf("%d",&num2);
    sonuc=num1+num2;
    x=(sonuc>0)?printf("sonuc: %d pozitiftir...",sonuc):printf("sonuc: %d negatiftir...",sonuc);

    return 0;
}
