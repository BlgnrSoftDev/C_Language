#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah,kel,cel,rea,ran;
    char secim;
    printf("Celcius turunden girdiginiz sicaklik degerini diger turlere cevirme programina hos geldiniz!\n");
    printf("Oncelikle Celcius Turunden Derecenin Degerini giriniz:\t");
    scanf("%f", &cel);
    printf("Reamour=1,Kelvin=2,Fahrenheit=3,Rankine=4,hepsi=5\n");
    printf("Hangi ture donusturmek istiyorsunuz:\t");
    scanf("%s", &secim);
    switch(secim){
    case '1':
        rea =  cel * 0.8;
        printf("%f Celcius = %f Reamour",cel,rea);
        break;
    case '2':
        kel = cel + 273.15;
        printf("%f Celcius = %f Kelvin",cel,kel);
        break;
    case '3':
        fah = cel * 1.8 + 32;
        printf("%f Celcius = %f Fahrenheit",cel,fah);
        break;
    case '4':
        ran =  cel * 1.8 + 32 + 459.67;
        printf("%f Celcius = %f Rankine",cel,ran);
        break;
    case '5':
        rea =  cel * 0.8;
        kel = cel + 273.15;
        ran =  cel * 1.8 + 32 + 459.67;
        fah = cel * 1.8 + 32;
        printf("%f Celcius = %f Reamour = %f Kelvin ",cel,rea,kel);
        printf("= %f Fahrenheit = %f Rankine",fah,ran);
        break;
    default:
        printf("Yanlis tuslama yaptiniz!!!!");
    }






    return 0;
}
