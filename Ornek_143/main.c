#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SezarAlgorithm(int rot_type, char *str);
void ToLowerArr(char *Arr);

int main()
{
    char f_name[25];
    int choice;
    short counter = 1;

    printf("%hi-) Sifreleme Yapilacak Dosyanin Adini Giriniz :",counter++);
    scanf("%s", f_name);
    fflush(stdin);

    while(1)
    {
        printf("\n%hi-) ROT- ?  kac sifrelemesi yapilacak ?, giriniz :",counter++);
        scanf("%d", &choice);
        if(choice > 25 || choice <= 0 )
        {
            printf("HATA");
            exit(1);
        }
        else
        {
            break;
        }
    }

    FILE *fp = fopen( f_name, "r+");

    if(fp == NULL)
    {
        printf("\n HATA !! Dosya Acilamadi...");
        exit(1);
    }

    int size = 0, empty;
    while( !feof(fp))
    {    size++;
         if(fgetc(fp) == EOF)
            break;
    }

    char *ptr = (char *) malloc( sizeof(char)*size );

    if(ptr == NULL)
    {
        printf("HATA !! Bellekten Yer Ayirilamadi");
        exit(1);
    }

    rewind(fp);
    int i = 0;
    while( !feof(fp) )
    {
        *(ptr + i) = fgetc(fp);
        i++ ;
    }



    puts(ptr);
    ToLowerArr(&ptr[0]);
    puts(ptr);
    SezarAlgorithm(choice, &ptr[0]);
    puts(ptr);


    rewind(fp);
    int l = 0;
    while(l < (size-1))
    {
        fputc(ptr[l++], fp);
    }

    printf("\n\n%hi Terchiniz olan Rot-%d Sifreleme Yontemi Ile %s Adli Dosyaya Yazilmistir -----------\n\n\n",counter++ ,choice, f_name);


    free(ptr);
    fclose(fp);
    return 0;
}

void SezarAlgorithm(int rot_type, char *str)
{
    char Alph[26];
    for(int i = 'a', m = 0; i < 'z'; ++i)
    {
        Alph[m++] = i ;

    }


    int loc, found;
    for(int i = 0; i < strlen(str); ++i)
    {
         found = 0 ;
         for(int j = 0; j < 26; ++j)
         {
            if(str[i] == Alph[j])
            {
                loc = j ;
                found = 1;
                break;
            }
         }

         if( found != 1)
         {
             continue;
         }

         loc = (loc + rot_type) % 26 ;

         str[i] = Alph[loc];

    }
}

void ToLowerArr(char *Arr)
{
    for(int i = 0; i < strlen(Arr); ++i)
    {
        *(Arr + i) = tolower(Arr[i]);
    }
}
