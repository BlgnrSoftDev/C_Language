#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Girilen not;
� 60 ile 65 aras�ndaysa DD
� 65 ile 70 aras�ndaysa DC
� 70 ile 75 aras�ndaysa CC
� 75 ile 80 aras�ndaysa CB
� 80 ile 85 aras�ndaysa BB
� 85 ile 90 aras�ndaysa BA
� 90 ile 100 aras�ndaysa AA
yazd�ran bir program yazal�m*/

int not=0;
printf("Lutfen Notunuzu giriniz.\t");
scanf("%d",&not);
if(not>=60&&not<65)
    printf("Notunuz DD'dir.");
else if(not>=65&&not<70)
    printf("Notunuz DC'dir.");
else if(not>=70&&not<75)
    printf("Notunuz CC'dir.");
else if(not>=75&&not<80)
    printf("Notunuz BC'dir.");
else if(not>=80&&not<85)
    printf("Notunuz BB'dir.");
else if(not>=85&&not<90)
    printf("Notunuz BA'dir.");
else if(not>=90&&not<100)
    printf("Notunuz AA'dir Tebrikler!...");
else
    printf("Maalesef basarisizsiniz...");
    return 0;
}
