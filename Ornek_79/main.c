#include <stdio.h>
#include <stdlib.h>
// us alma programi
int usal(int a,int b) ; //prototype
int main()
{
    int num1,us ;

    printf("Lutfen sayiyi giriniz :\t") ;
    scanf("%d",&num1) ;
    printf("Ussunu giriniz:\t") ;
    scanf("%d",&us) ;

    printf("\nSonuc : %d",usal(num1,us)) ;

    return 0;
}


int usal(int a,int b){
int net = 1 ;
for(int i = 0;i < b;i++){
    net *= a ;
}

return net ;
}
