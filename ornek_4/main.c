#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
   a=5;
   printf("a:\t%d\n",a);
   b=a++;
   printf("a:\t%d b:\t%d\n",a,b);
   c=++a;
   printf("a:\t%d b:\t%d c:\t%d\n",a,b,c);
    return 0;
}
