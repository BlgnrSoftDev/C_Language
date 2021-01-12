#include <stdio.h>
#include <stdlib.h>

//dosya islemleri...

int main()
{
    FILE *dosyaptr ;

    dosyaptr = fopen("helloworld.txt","r");

    if(dosyaptr == NULL)
    {
        printf("helloworld.txt dosyasi acilmadi !\n");
        exit(1);
    }

    fclose(dosyaptr);

    return 0;
}
