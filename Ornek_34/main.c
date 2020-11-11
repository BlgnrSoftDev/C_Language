#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alfabe[26];
    char ilk,son,sayac=0;
    for(ilk='a',son='z';ilk<=son;ilk++){
        alfabe[sayac]=ilk;
        printf(" %c ",alfabe[sayac]);
        sayac++;

    }


    return 0;
}
