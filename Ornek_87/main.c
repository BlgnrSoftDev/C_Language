#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
// esnek argumanli fonksiyon ornekleri
// parola kontrolu programi...
void parola(int , ...);

int main()
{
    parola(6, 1,2,3,4,5,6) ;
    return 0;
}

void parola(int n, ...){
int parola[6] = {1,2,3,4,5,6}, i ;
va_list par ;
va_start (par,n) ;
for( i = 0;i < n;i++){
    if(i >= 6){
        i++;
        break ;
    }
    if(parola[i] != va_arg(par, int)){
        break;
    }
}
i++ ;
if(i == 7)
    printf("giris basarili..") ;
else{
    printf("giris hatali....") ;
}
va_end(par) ;

}


