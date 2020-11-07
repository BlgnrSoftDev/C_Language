#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baslangic,bitis,belirtec;
    char karar;

    printf("Girilen iki sayi arasindaki asallari yazdiran program\n\n");
    do{
    printf("Baslangic degerini giriniz:\t");
    scanf("%d",&baslangic);
    printf("Bitis degerini giriniz:\t");
    scanf("%d",&bitis);

    for(;baslangic<=bitis;baslangic++){
        for(belirtec=2;belirtec<=baslangic;belirtec++){
            if(baslangic%belirtec==0)
                break;
        }
        if(baslangic==belirtec)
            printf(" %d,",baslangic);
    }
    printf("\n\n");
    printf("Eger programramdan cikmak istiyorsaniz e'yi tuslayiniz:\t");
    scanf(" %c",&karar);
    printf("\n");

    }while(karar != 'e');
    return 0;
}
