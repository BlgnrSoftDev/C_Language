#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("                 Fibonacci Dizisini Yazdiran Program:\n\n\n");
    double fibonacci[1000]= {1,1};
    int i,toplam=0;
    for(i=2;i<100;i++){
       fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
       printf("                %.0lf           \n",fibonacci[i-2]);
    }
    return 0;
}
