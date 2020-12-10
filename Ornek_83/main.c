#include <stdio.h>
#include <stdlib.h>

int main(int argsay, char *argvek[])
{
  int toplam;
  if(argsay < 3) {
    printf("eksik parametre !!\n") ;
    exit(1);
  }

  if(argsay > 3){
    printf("cok fazla parametre !\n") ;
    exit(1) ;
  }

  toplam = atoi(argvek[1]) + atoi(argvek[2]) ;
  printf("toplamlari %d\n",toplam) ;
    return 0;
}

//atoi ==> alpha numeric to int, atof ==> alpha numeric to float .............

