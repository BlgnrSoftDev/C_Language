#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 11, b = 33 ;
    printf("a : %d , b : %d\n",a,b) ;
    swap(&a,&b) ;
    printf("a : %d , b : %d\n",a,b) ;

    // ÜCÜNCÜ BÝR DEGÝSKEN KULLANMADAN SWAP ÝSLEMÝ

    int c = 10, d = 90 ;
    printf("c : %d, d : %d\n",c,d) ;
    c = c ^ d ; // XOR OPERATÖRÜ KULLANIMIYLA SWAP ÝÞLEMÝ ...
    d = c ^ d ;
    c = c ^ d ;

    printf("c : %d, d : %d\n",c,d) ;
    return 0;
}



void swap(int *a,int* b)
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;

}
