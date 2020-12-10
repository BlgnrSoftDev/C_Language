#include <stdio.h>
#include <stdlib.h>
//  Kullanýcýdan alýnan sayýlarý  kendi arasýnda karþýlaþtýrarak yalnýzca tek bi defa yazýlmýþ olan sayýlarý yazdý
int main()
{
    int numbers[50],unique[50],m = 0, range ;

    printf("---------Welcome----------------------------------\n\n") ;

    printf("how many numbers will u enter ? :\t") ;
    scanf("%d",&range) ;

    printf("------------------------------------\n\n") ;

    for(int i = 0;i < range;++i){
        printf("Enter num - %3.0d :\t",i + 1) ;
        scanf("%d",&numbers[i]) ;
    }

    for(int i = 0,control = 0;i < range;i++){
        control = 0 ;
        for(int j = 0;j <range;j++){
            if(numbers[i] == numbers[j])
                control++ ;
        }
        if(control == 1){
            unique[m] = numbers[i] ;
            m++ ;
        }
    }
    printf("\n\n------------------------------------\n\n") ;

    printf("Unique numbers ==>  ") ;
    for(int i = 0;i < m ;i++)
        printf("%d, ",unique[i]) ;

    printf("\n\n-------------------------Created by BlgnrSoftDev-------\n\n") ;

    return 0;
}
