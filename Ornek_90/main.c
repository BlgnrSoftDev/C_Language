#include <stdio.h>
#include <stdlib.h>
// recursive fonksiyon kullanarak girilen degere kadar olan fibonacci sayilari yazdiran ve toplamini de ayrica ekrana basan program....
int fibonacci(int lastvalue,int num1,int num2,int counter) ;
int element;
int main()
{
    int range,sum,indis;
    printf("- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n") ;
    printf("\nFibonacci dizisi icin ust sinir degerini giriniz :\t");
    scanf("%d",&range) ;
    printf("Ayrica kacinci elemani istersiniz:\t") ;
    scanf("%d",&indis) ;
    printf("\n") ;
    sum = fibonacci(range,0,1,indis) ;
    printf("\n\nYukaridaki degerlerin toplami ==> %d \n\n",sum) ;

    printf("Dizinin %d. indisindeki eleman ==> %d 'dir",indis,element) ;
    printf("\n\n- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n\n") ;
    printf("===================> Created by BlgnrSoftDev <=====================") ;
    return 0;
}

int fibonacci(int lastvalue,int num1,int num2,int counter)
{
short x ;

if(counter == 0)
{
    element = num2 ;
}
if(num2 > lastvalue)
{
    return 0 ;
}
else
{
    x = (num1 == 0)?printf(" 0, "):printf(" %d, ",num2) ;
    return num2 + fibonacci(lastvalue,num2,num1 + num2,--counter) ;
}

}


