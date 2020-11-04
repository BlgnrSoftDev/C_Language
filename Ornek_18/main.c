#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Alfabedeki harfleri yazdýrma projesi
    int asci1=65,ascii2=90;
    char ilk='a',son='z';
    printf("Alfabedeki harfleri alt alta yazdiralimm!!!\n\n");
    while(ilk<=son){
        printf("%c, ",ilk);
        ilk++;
    }
    printf("\n\nBu ASCI versiyonudur...\n\n");
    for(;asci1<=ascii2;asci1++){
        printf("%c,",asci1);
    }
    return 0;
}
