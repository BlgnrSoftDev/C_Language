#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Belirtilen deðere kadar asal sayi hesaplama version_2
    int i,j,kontrol,ustdeger;
    printf("sayi gir:\t");
    scanf("%d",&ustdeger);
    for(i=2;i<=ustdeger;i++){
            kontrol=1;
        for(j=2;j<i;j++){
            if(i%j==0){
               kontrol=0;
               break;

            }
        }
        if(kontrol==1)
            printf(" %d\n",i);
    }
    return 0;
}
