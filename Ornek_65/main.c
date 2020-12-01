#include <stdio.h>
#include <stdlib.h>

int not_hesaplayici(int vize,int finall);// ---> Prototype tanýmlamasý.

int main()
{
    int vize_notu,final_notu ;
    printf(" vize notunuzu giriniz:\t") ;
    scanf("%d",&vize_notu) ;
    printf("final notunu giriniz:\t") ;
    scanf("%d",&final_notu) ;
    printf("%d",not_hesaplayici(vize_notu,final_notu)) ;

    return 0;
}

int not_hesaplayici(int vize,int finall){
int not ;
not = ( vize * 3 + finall * 7 ) / 10 ;
return not ;
}
