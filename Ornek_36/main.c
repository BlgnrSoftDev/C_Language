#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ilk=1,ikinci=1,dizi=0;
    printf("%.0lf\n%.0lf\n",ilk,ikinci);
    for(int i=1;i<=100;i++){
        dizi=ilk+ikinci;
        ilk=ikinci;
        ikinci=dizi;
        printf("%.0lf\n",dizi);
    }
    return 0;
}
