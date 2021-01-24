#include <stdio.h>
#include <stdlib.h>

struct persona
{
    char name[20];
    char surname[20];
    int code;
};

typedef struct persona Personals;

int main()
{
    int size;
    printf("Kac elemanin bilgilerini gireceksiniz ? : ");
    scanf("%d", &size);
    printf("\n\n");

    Personals *div_A = (Personals *) malloc(sizeof(Personals)*size);

    for(int i = 0; i < size; ++i)
    {
        printf("%d. elemanin adini giriniz : ", i + 1);
        scanf("%s",(div_A+i)->name);
        printf("%d. elemanin soyadini giriniz : ", i + 1);
        scanf("%s",(div_A+i)->surname);
        printf("%d. elemanin kodunu giriniz : ", i + 1);
        scanf("%d",&(div_A+i)->code);
    }

    print_struct(div_A, size);




    free(div_A);
    return 0;
}


void print_struct(Personals* ptr, int s)
{
    printf("\n\n");
    for(int i = 0; i < s; ++i)
    {
        printf("%d. elemanin adi: %s\n", i + 1, (*(ptr+i)).name);
        printf("%d. elemanin soyadi: %s\n", i + 1, (*(ptr+i)).surname);
        printf("%d. elemanin kodu: %d\n", i + 1, (ptr+i)->code);
    }


}
