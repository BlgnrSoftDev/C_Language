#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("sayi gir:\t");
    scanf("%d",&num);
    (num==1)?printf("-----1-----"):(num==2)?printf("-----2-----"):(num==3)?printf("-----3-----"):(num==4)?printf("-----4-----"):(num==5)?printf("-----5-----"):printf("girilen sayi 1,2,3,4,5 degil.");
    return 0;
}
