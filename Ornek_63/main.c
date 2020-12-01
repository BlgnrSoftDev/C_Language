#include <stdio.h>
#include <stdlib.h>
//fonksiyonlarda recursion temel ornek
int uzunluk,p =1 ;

int saydir(char a, char b[],int c){
    printf("bu fonksiyonun %d. cagrimidir.\n",p) ;
    p++;
    if(c == uzunluk)
        return 0 ;
    if (b[0] == '\0')
        return 0 ;
    else if (a == b[c])
        return 1 + saydir(a,b,c+1) ;
    else
        return 0 + saydir(a,b,c+1) ;

    }


int main()
{
    char metin[15], harf ; //metin giriþi
    int sayac = 0,sonuc ;

    printf("cumleyi giriniz:\t");
    gets(metin) ;

    printf("arancak harf giriniz:\t") ;
    scanf("%c",&harf) ;

    uzunluk = strlen(metin) ;
    sonuc = saydir(harf,metin,sayac) ;
    printf(" \n%d tane %c harfi vardir...",sonuc,harf) ;


    return 0;
}
