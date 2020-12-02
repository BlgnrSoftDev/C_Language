#include <stdio.h>
#include <stdlib.h>
//Donguler ile ucgen cizmek ......
int main()
{
    int j = 13, m,k = 13,n ;

    for(int i = 0;i < 10;i++){
        m = j ;
        printf("\t") ;
        while(j > 0){
            printf("*");
            j-- ;
        }
        printf("\n") ;
        j = m ;
        j -= 2 ;
    }


    for(int i = 0;i < 10;i++){
        n = k ;
        printf("\t") ;
        while(k > 0){
            printf("*");
            k-- ;
        }
        printf("\n") ;
        k = n ;
        k -= 2 ;
    }
    return 0;
}
