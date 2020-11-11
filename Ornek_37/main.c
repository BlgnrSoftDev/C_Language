#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kullanýcýdan 10 tane sayý alma\n");
    int veriler[10],m=1;
    for(int i=1;i<=10;i++){
        printf("Lutfen %d. Sayiyi giriniz:\t",i);
        scanf("%d",&veriler[i-1]);

    }
    printf("\n\n Sayilar :");
    while(m<=10){
        printf(" %d,",veriler[m-1]);
        m++;
    }
    return 0;
}
