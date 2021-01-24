#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20] ;
    int year ;

    FILE *dosyaptr ;
    dosyaptr = fopen("hangiyildayiz.txt", "w+") ;

    if(dosyaptr == NULL)
    {
        printf("hangiyildayiz.txt acilamadi. !!");
        exit(1);
    }

    fprintf(dosyaptr, "%s %d %s", "busene", 2021, "yilidir.");


    fscanf(dosyaptr, "%s %d %s", str1, &year, str2);
    printf("%s %d %s", str1, year, str2);



    fclose(dosyaptr);
    return 0;
}
