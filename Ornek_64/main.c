#include <stdio.h>
#include <stdlib.h>

//Fonksiyonlarin i� ice kullanim �rnegidir......
void ad(void){
printf("\tHuseyin\t") ;
soyad();
}

void soyad(void){
printf("Bilginer") ;
}
int main()
{
    printf("\n Hosgeldiniz....") ;
    ad();
    return 0;
}
