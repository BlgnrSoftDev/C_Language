#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablo=1;
    printf("Carpim tablosunu yazdirma\n");
    for(int i=1;i<=10;i++){

        for(int j=1;j<=10;j++){
            printf(" %d x %2.d == %d \n",i,j,i*j);
        }
    }
    return 0;
}
