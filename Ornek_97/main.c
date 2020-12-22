#include <stdio.h>
#include <stdlib.h>

//pointerlar.....

int main()
{
    // const bir degisken tanimlayip pointerlar kullanılarak değişkenin değerini değiştirme.....
    const int c = 5 ;
    int *ptr = &c ;
    *ptr = 9 ;
    printf("const olarak tanimlanan ilk degeri 5 olan c degiskeninin yeni degeri %d",*ptr) ;

    printf("\n\n\n\n\n") ;

    // pointerlar ile zincir yapma yani birbirlerini pointleme...
    int a = 9, b = 7;
    int *pointer, **pointer2, ***pointer3 ;
    pointer = &b ;
    pointer2 = &pointer ;
    pointer3 = &pointer2 ;
    printf("a degiskeninin adresi :%p\n",&a) ;
    printf("ilk pointerin isaretlendigi deger :%d\n", *pointer) ;
    printf("ikinci pointerin isaretlendigi deger : %d\n", **pointer2) ;
    printf("ucuncu pointerin isaretlendigi deger : %d\n", ***pointer3) ;

    printf("\n\n\n\n\n") ;
    // Bir int degiskeninin her bir byte lık bellek gozundeki degerlerini bulma...
    int num = 500 ;
    char *pointerx = &num ;

    printf("%p. adresteki deger %d\n",  pointerx,*pointerx) ;
    printf("%p. adresteki deger %d\n", (pointerx + 1),*(pointerx + 1)) ;
    printf("%p. adresteki deger %d\n", (pointerx + 2),*(pointerx + 2)) ;
    printf("%p. adresteki deger %d\n", (pointerx + 3) ,*(pointerx + 3)) ;
    printf("%p baslangic adresli degiskenimizin bellek gozlerinin butun haliyle olan degeri : %d",&num,num) ;

    // NULL işaretçi.........

    int *m ;
    m = NULL ;


    printf("\n\nm pointerinin isaretledigi adres : %p\n",m) ;

    if(m)
        printf("m pointeri null degildir...") ;
    else
        printf("m pointeri null' dur....\n") ;

    // pointer aritmetigi........
    // pointer + 1 == ptr + sizeof(veri tipi) * 1
    printf("\n\n\n") ;
    int *isrt, k = 3;
    isrt = &k ;
    printf("%p\n",isrt) ;
    printf("%p\n",++isrt) ; // int = 4byte olduğu için 4 arttırır..
    printf("%p\n",--isrt) ; // int = 4byte olduğu için 4 azaltır..
    printf("%p\n",(isrt + 1)) ;

    // Dizilerde pointer kullanarak elemanlar arasi gezmek....

    int dizi[6] = {0,10,20,30,40,50} ;
    int *ptrxy = &dizi[0] ;

    printf("\n\n\n==> %d\t",*(ptrxy + 0)) ;
    printf("parantez unutsaydim ==> %d\n",*ptrxy + 0) ;
    printf("==> %d\t",*(ptrxy + 1)) ;
    printf("parantez unutsaydim ==> %d\n",*ptrxy + 1) ;
    printf("==> %d\t",*(ptrxy + 2)) ;
    printf("parantez unutsaydim ==> %d\n",*ptrxy + 2) ;
    printf("==> %d\t",*(ptrxy + 3)) ;
    printf("parantez unutsaydim ==> %d\n",*ptrxy + 3) ;
    printf("==> %d\t",*(ptrxy + 4)) ;
    printf("parantez unutsaydim ==> %d",*ptrxy + 4) ;


return 0;
}
