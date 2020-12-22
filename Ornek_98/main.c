#include <stdio.h>
#include <stdlib.h>
//pointerlar ile dizinin elemanlarını yazdırma..
void wriarr1(int arr[], int m);
int main()
{
    int array[5] = {1,2,3,4,5} ;
    int *ptr = &array ;
    wriarr1(array,5) ;
    return 0;
}

void wriarr1(int arr[], int m)
{

    int *ptrtr = arr ;

    printf("YONTEM 1: DIZI/ISARETCI OFFSET\n");
    for(int i = 0;i < m; ++i)
    {
        printf("%d, ",*(arr + i)) ;
    }

    printf("\n\n");

    printf("YONTEM 2: DIZI INDISLERI\n");
    for(int i= 0; i < m; ++i)
    {
        printf("%d, ",arr[i]) ;
    }

    printf("\n\n") ;

    printf("YONTEM 3: ISARETCI OFFSET\n");
    for(int i = 0; i < m; ++i)
    {
        printf("%d, ",*(ptrtr + i));
    }

    printf("\n\n\n");
}
