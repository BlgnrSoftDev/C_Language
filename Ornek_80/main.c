#include <stdio.h>
#include <stdlib.h>



void main(int argc,char *argv[])
{​​​​
int islem=atoi(argv[1]);
double a,b;
a=atof(argv[2]);
b=atof(argv[3]);



printf("a:%lf b:%lf",a,b);



float sonuc;



switch(islem){​​​​
case 1:
sonuc=a+b;
break;
case 2:
sonuc=a-b;
break;
case 3:
sonuc=a*b;
break;
case 4:
sonuc=a/b;
break;
default:
printf("Gecersiz islem\n");
}​​​​



printf("Sonuc: %lf",sonuc);



}​​​​
