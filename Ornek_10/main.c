#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("Lutfen bir harf giriniz: \t");
    scanf("%c",&harf);
    switch(harf){
case 'A':
case 'a':
    printf("A harfi girdiniz.");
    break;
default:
    printf("A harfini girmediniz.");
           }
    return 0;
}
