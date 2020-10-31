#include <stdio.h>
#include <stdlib.h>

int main()
{
    double carpim,num1,num2,toplam,bolum,fark;
    printf("Lutfen ilk sayiyi giriniz:   \t");
    scanf("%lf",&num1);

    printf("Lutfen ikinci sayiyi giriniz:\t");
    scanf("%lf",&num2);

    toplam=num1+num2;
    fark=num1-num2;
    carpim=num1*num2;
    bolum=num1/num2;

    printf("Girdiginiz sayilarin toplami: \t%.2lf\n",toplam);
    printf("Girdiginiz sayilarin farki:   \t%.2lf\n",fark);
    printf("Girdiginiz sayilarin carpimi: \t%.4lf\n",carpim);
    printf("Girdiginiz sayilarin bolumu:  \t%lf\n",bolum);

    return 0;
}
