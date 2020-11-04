#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ustdeger,i,j,kontrol;
    printf("Belirlediginiz sayiya kadar olan asallari yazdirma programina hosgeldiniz!!\n");
    printf("Oncelikle ust siniri giriniz\t");
    scanf("%d",&ustdeger);
    for(i=2;i<=ustdeger;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i%j==0&&i==j)
        printf(" %d,",i);
    }



    return 0;
}
