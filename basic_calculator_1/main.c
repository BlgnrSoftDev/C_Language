#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,toplam,farki,carpim,bolme;

    printf("Lutfen 1. sayiyi giriniz: \t " );
    scanf("%f",&num1);
    printf("Lutfen 2. sayiyi giriniz: \t " );
    scanf("%f",&num2);

    toplam=num1+num2;
    farki= num1-num2;
    carpim=num1*num2;
    bolme=num1/num2;

    printf("Girdiginiz sayilarin toplami : %f \t \nGirdiginiz sayilarin farki : %f \t \nGirdiginiz sayilarin carpimi : %f \t \nGirdiginiz sayilarin       bolumu : %f \t \n",toplam ,farki,carpim,bolme);


    return 0;

}
