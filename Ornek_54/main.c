#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[100],son;
    printf("****************************************************************************************************************\n\n\n\n");
    printf("Girilen cumleyi tersten yazdýrma programý\n\n\n");

    printf("Lutfen bir cumle giriniz:\t");
    scanf("%s",cumle);

    son = strlen(cumle) ;

    printf("\n\n\n|--------->  ");
    while(son-1>=0){
        printf("%c",cumle[son-1]);
        son--;

    }


    printf("\n\n\n\n****************************************************************************************************************\n");

    return 0;
}
