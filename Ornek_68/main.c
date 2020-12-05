#include <stdio.h>
#include <stdlib.h>
// fonksiyonlarla faktoriyel hesaplama programi..
int faktoriyel(int a){
    int hesaplama = 1 ;
    if(a <= 1)
        return 1 ;
    else if(a >= 1 )
        hesaplama *= a * faktoriyel(a-1) ;
        return hesaplama;

}
int main()
{
    int sayi ;
    printf("faktoriyel alacaginiz degeri giriniz:\t") ;
    scanf("%d",&sayi) ;

    printf("%d",faktoriyel(sayi)) ;
    return 0;
}
