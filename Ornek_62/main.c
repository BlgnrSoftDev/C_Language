#include <stdio.h>
#include <stdlib.h>
//Algoritma dersindeki ornek
void mesaj (char m[]){
    printf("Hosgeldiniz.. %s \n\n\n",m) ;

}
int topla (int x,int y){
    int sonuc ;
    sonuc = x + y ;
    return sonuc ;

}

int carpma (int x, int y){
    int carpim ;
    carpim = x * y ;
    return carpim ;

}
int main()
{
    int x,y ;
    char n[15] ;
    printf("Adiniz nedir:\t\n");
    gets(n) ;
    mesaj(n) ;

    printf("Ilk sayiyi giriniz:\t");
    scanf("%d",&x) ;

    printf("Ikinci sayiyi giriniz:\t");
    scanf("%d",&y) ;

    printf("toplam: %d, carpim: %d",topla(x,y),carpma(x,y)) ;
    return 0;
}




