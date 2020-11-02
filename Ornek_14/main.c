#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi,x=0,i=2;
   printf("Asal sayi bulma uygulamamiza hosgeldiniz\n");
   printf("Lutfen Sayiyi giriniz:\t");
   scanf("%d",&sayi);
   for(;i<=sayi;i++){
       x=sayi%i;
       if(x==0)
        break;

   }
   if(x==0&&sayi==i)
    printf("girilen sayi asal sayidir...");
   else
    printf("girilen sayi asal degildir...");


    return 0;
}
