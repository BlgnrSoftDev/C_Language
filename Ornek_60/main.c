#include <stdio.h>






int saydir(int ahmet,char metin2[]){​​



if(metin2[ahmet]=='\0')
return 0;
else if(metin2[ahmet]=='A')
return 1+saydir(ahmet+1,metin2);
else
return 0+saydir(ahmet+1,metin2);
}​​




int main()
{​​
char metin[100]; //lokal(yerel) değişken
int z;
printf("Metni gir: ");
gets(metin);
z=saydir(0,metin);
printf("Metinde %d tane A var",z);
return 0;
}​​
