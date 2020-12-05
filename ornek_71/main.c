#include <stdio.h>
#include <stdlib.h>
// Ortasi bos kare bastirma programi.....
int main()
{
    int son ;
    printf("Kenar sayisini giriniz:\t") ;
    scanf("%d",&son) ;

    printf("\n\n\n") ;

    for(int ilk = 0;ilk <= son;ilk++){
        printf("\t") ;

        if(ilk == 0){
            for(int i = 0;i < son;i++){
                printf(" *");
            }
            printf("\n");
            continue ;
        }
        else if (ilk == son){
            for(int i = 0;i < son;i++){
                printf(" *") ;
        }
        printf("\n");
        continue ;
        }

        for(int x = 0;x < 1;x++)
            printf(" *") ;
        for(int y = 0;y < (son - 2);y++)
            printf("  ") ;
        for(int x = 0;x < 1;x++)
            printf(" *") ;
        printf("\n");
    }
    return 0;
}
