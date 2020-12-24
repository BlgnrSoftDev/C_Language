#include <stdio.h>
#include <stdlib.h>
// void fonksiyon kullanarak pointer işlemleri...
int main()
{
    int engineer,programmer,cooker, raise ;
    printf("sirasiyla birer bosluk birakarak asci,programci,muhendis maasi ve zam orani giriniz giriniz");
    scanf("%d %d %d %d",&cooker,&engineer,&programmer,&raise) ;
    maashesapla(&cooker,&programmer,&engineer,raise);
    printf("asci = %d, programmer = %d, engineer = %d", cooker , engineer , programmer) ;
    return 0;
}

void maashesapla(int *e_maas,int *p_maas,int *c_maas, int zam)
{
      *e_maas += *e_maas * zam / 100 ;
      *p_maas += *p_maas * zam / 100 ;
      *c_maas += *c_maas * zam / 100 ;

}
