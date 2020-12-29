#include <stdio.h>
#include <stdlib.h>

/* printf() ve scanf() fonksiyonlar�n� kullanarak kullan�c�n�n belirledi�i say�da ald���n�z say�larla olu�turulan tek boyutlu bir dizinin ilk ve son eleman�na pointer yap�s�n� kullanarak ula��p, bu de�erlerin yerlerini birbirleri ile de�i�tirin. E�er dizi 1 elemandan olu�uyorsa bu de�i�ikli�in ger�ekle�emedi�ini bir mesajla belirtin. */

void createarr(int size);
void changeelements(int* array, int size2 );

int main()
{
    int size0 ;
    printf("Welcome to my program,\n");
    printf("\nPlease, firstly enter the size of array that you will create :   ") ;
    scanf("%d",&size0) ;
    createarr(size0) ;
    return 0;
}

void createarr(int size)
{
    int arr[size] ;
    printf("\n\n") ;
    for(int i = 0; i < size; ++i)
    {
        printf(" Enter %d. elements :   ", i + 1) ;
        scanf("%d",arr + i) ;
    }

    printf("\n//Before changed elements :\n\n ==> {") ;
    for(int i = 0; i < size; ++i)
    {
        printf(" %d, ",*(arr + i)) ;
    }

    printf("}");

    changeelements(&arr[0],size);
}

void changeelements(int* array, int size2 )
{
    int temp ;
    temp = *(array + size2 -1); // last element
    *(array + size2 -1) = *array ;
    *array = temp ;

    printf("\n\n//After changed elements :\n\n ==> {");
    for(int i = 0; i < size2; ++i)
    {
        printf(" %d, ",*(array + i)) ;
    }

    printf("} \n\n") ;
}
