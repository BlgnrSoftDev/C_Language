#include <stdio.h>
#include <stdlib.h>


//bunun neden doğru calısmadıgını bulunuz..


void fonk(int x[],int *y ){ //aldıklarını 1 artır
x[0]++ ;
*y += 1 ;  // call by reference ....
}



int main()
{
int dizi[1] = {8} ;
int degisken=20;
fonk(dizi,&degisken);
printf("%d %d",dizi[0],degisken);
return 0;
}
