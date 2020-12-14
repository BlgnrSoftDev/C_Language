#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
// esnek argumanli fonksiyon kullanarak kullanicidan girilen koordinatlar arasi uzakligin teker teker ekrana bastirilmasi ornegi...
void distances(int n, ...) ;
int main(void)
{
 int x1,x2,y1,y2,x3,y3 ;
 printf("\n- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n\n") ;
 printf("1. koordinati giriniz (x y) seklinde arada tek bosluk birak:\t") ;
 scanf("%d %d",&x1,&y1) ;

 printf("2. koordinati giriniz (x y) seklinde arada tek bosluk birak:\t") ;
 scanf("%d %d",&x2,&y2) ;

 printf("3. koordinati giriniz (x y) seklinde arada tek bosluk birak:\t") ;
 scanf("%d %d",&x3,&y3) ;

 printf("\n\n- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n\n") ;

 distances(6, x1,y1,x2,y2,x3,y3) ;
 printf("\n\n- -- -- - - - - - - - - - - -- - - - - -- -  -- - - - - - - --  -- - - \n\n") ;
 printf("===================> Created by BlgnrSoftDev <=====================\n\n") ;

}


void distances(int n, ...)
{
    int dots[100][2] ;
    va_list coordinates;
    va_start (coordinates,n);

    for(int i = 0; i < n/2 ; ++i)
    {
        dots[i][0] = va_arg(coordinates,int); // x koordinati icin.
        dots[i][1] = va_arg(coordinates,int); // y koordinati icin.
    }

    for(int i = 0; i < n/2; ++i)
    {
        for(int j = i + 1; j < n/2; ++j)
        {
            printf("  %d. nokta ile %d. nokta arasi uzaklik : \n\n====> %f 'dir.\n\n",i + 1, j + 1,sqrt(pow(dots[i][0] - dots[j][0],2)+pow(dots[i][1] - dots[j][1], 2))) ;
        }
    }


    va_end(coordinates);
}
