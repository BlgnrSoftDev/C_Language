#include <stdio.h>
#include <stdlib.h>
// A harfi basma programiii  (onemsiz ornek)
int main()
{
    int l = 0, p = 9,g = 9 ;
    for(int i = 0 ;i < 10;i++) {
        for(int z = 0;z < p;z++){
            printf(" ");
        }
        p -= 1 ;
        for(int j = 0;j < 1;j++){
            printf("*");
        }
        for(int m = 0;m < l;m++)
            printf(" ");
        l++;
         for(int j = 0;j < 1;j++){
            printf("*");
        }
        for(int x = 0;x < g;x++)
            printf(" ");
        g -= 1 ;
        printf("\n") ;

    }


    return 0;
}
