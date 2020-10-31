#include <stdio.h>
#include <stdlib.h>

int main()
{
    int plaka;
    printf("Lutfen plaka no giriniz...\t");
    scanf("%d",&plaka);
    switch(plaka){
case 1:
    printf("Adana...");
    break;
case 2:
    printf("Adýyaman...");
    break;
case 3:
    printf("Afyon...");
    break;
case 6:
    printf("Ankara...");
    break;
case 7:
    printf("Antalya...");
    break;
case 8:
    printf("Artvin...");
    break;
case 9:
    printf("Aydin...");
    break;
default:
    printf("\n");
    printf("Devamini Usendigimden Yazmadim google'a bak :)");
    printf("\n");
    }
    return 0;
}
