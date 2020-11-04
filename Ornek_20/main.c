#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ustdeger,i=1,j=1;
    char tercih;
    printf("Belirlediginiz araliga kadar tek,cift sayilari gosterme uygulamasina hos geldiniz\n\n");
    printf("Öncelikle ust degeri belirleyiniz:\t ");
    scanf("%d",&ustdeger);
    printf("tek sayilar=1,cift sayilar=2\n");
    printf("Hangi islemi gormek istiyorsaniz seciniz: ");
    scanf(" %c",&tercih);

    if(tercih=='2'){
        while(i<=ustdeger){
            if(i%2==0){
                printf(" %d,",i);
            }
            i++;
        }
    }
    else{
        while(j<=ustdeger){
            if(j%2!=0){
                printf(" %d,",j);
            }
            j++;
        }
    }




    return 0;
}
