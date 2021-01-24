#include <stdio.h>
#include <stdlib.h>

// basit tek bagli liste ornegidir...

struct dugum
{
    char harf;
    struct dugum *ptr;
};

typedef struct dugum Tek_bagli_list;

int main()
{
    Tek_bagli_list veri1, veri2, veri3 ;

    veri1.harf = 'Z';
    veri2.harf = 'P';
    veri3.harf = 'A';
    veri1.ptr = &veri2;
    veri2.ptr = &veri3;
    veri3.ptr = NULL;

    printf("%c \n", veri1.ptr->ptr->harf);
    printf("%c \n", veri2.ptr->harf);
    printf("%c \n", veri3.harf);
    printf("%c \n", (*((*(veri1.ptr)).ptr)).harf);





    return 0;
}
