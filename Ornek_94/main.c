#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
// bu program ile ornegin oldugu dizinde basta verdigimiz arguman adiyla yeni bir klasor olusturur...
int main(int argc, char* argv[])
{
    for(int i = 0; i < argc; ++i)
    {
        printf(" %s \n",argv[i]) ;
    }
    char dizinadi[100] ;
    strcpy(dizinadi,"./") ;
    strcat(dizinadi,argv[1]);
    mkdir(dizinadi);
    return 0;
}
