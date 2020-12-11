#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t ;
    int randomnumbers[5], guessnumbers[5], pairednumbers[5], paired = 0, k = 0, counter = 0, n ;
    srand((unsigned) time(&t));

    printf("- - - - - - -Loto uygulamasina hosgeldiniz!!- - - - - - - - -- - - -  - - - \n\n\n") ;

    printf("Tahmin araligi 0 dan kaca kadar olsun istersiniz :\t ") ;
    scanf("%d",&n) ;

    for(int j = 0; j < 5;j++){
        printf("Lutfen %d. sayiyi giriniz :\t", j + 1) ;
        scanf("%d",&guessnumbers[j]) ;
    }

    for(int i = 0; i < 5; i++){
        randomnumbers[i] = rand() % n ;
    }

    for(int i = 0 ; i < 5; ++i)
    {
        paired = 0 ;

        for(int j = 0; j < 5; ++j)
        {
            if(guessnumbers[i] == randomnumbers[j])
            {
                paired++ ;
            }
        }

        if(paired > 0)
        {
            pairednumbers[k] = guessnumbers[i] ;
            k++ ;
            counter += paired ;

        }
    }



    while(k - 1 < 5)
    {
        pairednumbers[k] = 0 ;
        k++ ;
    }



    printf("\n\n") ;

    printf("loto sayilari ==> ") ;
    for(int i = 0;i < 5; i++)
    {
        printf(" %d , ",randomnumbers[i]) ;
    }

    printf("\n- - - - - - - - - - - - -- - - - - - - - - - --  -- - -\n");
    printf("sizin sayilariniz ==> ") ;
    for(int i = 0; i < 5; i++)
    {
        printf(" %d ,",guessnumbers[i]) ;
    }

    printf("\n- - - - - - - - - - - - -- - -  - -- - - - - - - - - - \n");
    printf("tutan sayilar ==> ");
    for(int i = 0; i < 5; i++)
    {
        printf(" %d ,",pairednumbers[i]) ;
    }

    printf("\n- - - - - - - - - - - - -- - -  - -- - - - - - - - - - \n");

    printf("\nToplam %d tane sayi bildiniz....\n\n", counter) ;


    printf("===================> Created by BlgnrSoftDev <=====================") ;


    return 0;

}
