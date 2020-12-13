#include <stdio.h>
#include <stdlib.h>
int fibonacci(int x) ;
int sayac = 0 ;
int main()
{
    // kullanicidan alinan indisteki degeri donduren programm
    int sayi,a ;
    printf("- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n") ;
    printf("\nwhich index of fibonacci do u want ? :\t ");
    scanf("%d",&sayi) ;
    a = fibonacci(sayi) ;
    printf("\n====>Total : %d \n\n====>This function repeated %d times.\n\n\n",a ,sayac) ;
    printf("\n- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n\n") ;

    return 0;
    return 0;
}

int fibonacci(int x)
{
    sayac++ ;
    if(x == 0)
    {
        return 0 ;
    }
    else if(x == 1)
        return 1 ;
    else
    {
        return fibonacci(x-1) + fibonacci(x-2) ;
    }
}
