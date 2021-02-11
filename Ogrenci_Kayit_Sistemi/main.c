#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* BASİT BİR KAC OZELLİKTEN OLUSAN OGRENCİ YONETİM SİSTEMİ PROJESİ */

typedef struct
{
    char name[30], surname[30], gender[6], discipline_n[250], classs[25], age[3];


}Student;


int main()
{

    int choice;
    char id[20];
    beginning :
    printf("\n*************[ OGRENCI YONETIM SISTEMINE HOSGELDINIZ ]***************\n\n");
    printf("# Isleminizi Seciniz : \n\n");
    printf("1-) Ogrenci Kayit Ekle\n");
    printf("2-) Mevcut Ogrenci Bilgi Guncellemesi\n");
    printf("3-) Ogrenci Sil\n");
    printf("4-) Ogrenci Bilgi Goruntuleme\n\n==> ");
    scanf("%d", &choice);
    printf("\n---------------------------------------------------------------------\n\n");


    printf("# Ogrenci ID giriniz :\n\n==> ");
    scanf("%s", id);
    strcat(id,".txt");
    printf("\n---------------------------------------------------------------------\n\n");

    if(choice == 1)
    {
        FILE* fp = fopen(id, "w+");

        if(fp == NULL)
        {
            printf("HATA!! Dosya Acilamadi..");
            exit(1);
        }

        Student new_st ;
        CreateStudent(new_st, fp);
        fclose(fp);
    }

    else if( choice == 4)
    {
        FILE *fp = fopen(id, "r");

        if(fp == NULL)
        {
            printf("HATA!! Dosya Acilamadi..");
            exit(1);
        }

        Student new_st ;

        int m = 0, ctrl = 0 ;
        char temp;
        while( !feof(fp))
        {
            if( ( temp = fgetc(fp)) == EOF)
            {
                break;
            }

            if( temp == '$')
            {
                if(ctrl == 0)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.name[m++] = temp2 ;

                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.name[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;
                }
                else if(ctrl == 1)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.surname[m++] = temp2 ;

                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.surname[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 2)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.classs[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.classs[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 3)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.age[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.age[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 4)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.gender[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.gender[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 5)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.discipline_n[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.discipline_n[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else
                {
                    break;
                }

            }


        }
            printf("----------------------[ OGRENCI RAPORU ]-----------------------------\n\n");
            printf("==> Adi : %s\n\n", new_st.name);
            printf("==> Soyadi : %s\n\n", new_st.surname);
            printf("==> Sinifi : %s\n\n", new_st.classs);
            printf("==> Yas : %s\n\n", new_st.age);
            printf("==> Cinsiyet : %s\n\n", new_st.gender);
            printf("==> Disiplin Kaydi : %s\n\n", new_st.discipline_n);
            printf("----------------------------------------------------------------------");



            fclose(fp);
    }

    else if(choice == 2)
    {
        FILE *fp = fopen(id, "r+");

        if(fp == NULL)
        {
            printf("HATA!! Dosya Acilamadi..");
            exit(1);
        }

        Student new_st ;

        int m = 0, ctrl = 0 ;
        char temp;
        while( !feof(fp))
        {
            if( ( temp = fgetc(fp)) == EOF)
            {
                break;
            }

            if( temp == '$')
            {
                if(ctrl == 0)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.name[m++] = temp2 ;

                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.name[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;
                }
                else if(ctrl == 1)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.surname[m++] = temp2 ;

                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.surname[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 2)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.classs[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.classs[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 3)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.age[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.age[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 4)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.gender[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.gender[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 5)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.discipline_n[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.discipline_n[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else
                {
                    break;
                }

            }


        }
            printf("----------------------[ OGRENCI RAPORU ]-----------------------------\n\n");
            printf("==> Adi : %s\n\n", new_st.name);
            printf("==> Soyadi : %s\n\n", new_st.surname);
            printf("==> Sinifi : %s\n\n", new_st.classs);
            printf("==> Yas : %s\n\n", new_st.age);
            printf("==> Cinsiyet : %s\n\n", new_st.gender);
            printf("==> Disiplin Kaydi : %s\n\n", new_st.discipline_n);
            printf("\n\n----------------------------------------------------------------------\n\n");

            int choice2 ;
            printf("# Degistirmek Ýstediginiz Bilgi Nedir ?\n");
            printf("1-) Ad\n");
            printf("2-) Soyad\n");
            printf("3-) Sinif\n");
            printf("4-) Yas\n");
            printf("5-) Cinsiyet\n");
            printf("6-) Disiplin Kaydi\n\n==> ");
            scanf("%d", &choice2);
            printf("\n\n----------------------------------------------------------------------\n\n");

            switch(choice2)
            {
            case 1:
                printf("# Yeni Adi Giriniz :\n\n==> ");
                scanf("%s",new_st.name);
                printf("\n\n----------------------------------------------------------------------\n\n");
                break;
            case 2:
                printf("# Yeni Soyadi Giriniz :\n\n==> ");
                scanf("%s",new_st.surname);
                printf("\n\n----------------------------------------------------------------------\n\n");
                break;
            case 3:
                printf("# Yeni Sinifi Giriniz :\n\n==> ");
                scanf("%s",new_st.classs);
                printf("\n\n----------------------------------------------------------------------\n\n");
                break;
            case 4:
                printf("# Yeni Yasi Giriniz :\n\n==> ");
                scanf("%s",new_st.age);
                printf("\n\n----------------------------------------------------------------------\n\n");
                break;
            case 5:
                printf("# Yeni Cinsiyeti Giriniz :\n\n==> ");
                scanf("%s",new_st.gender);
                printf("\n\n----------------------------------------------------------------------\n\n");
                break;
            case 6:
                printf("# Yeni Disiplin Notunu Giriniz :\n\n==> ");
                scanf("%s",new_st.discipline_n);
                printf("\n\n----------------------------------------------------------------------\n\n");
                break;
            }

            rewind(fp);
            fprintf(fp, "-------------------------------\n\n");
            fprintf(fp, "==> Adi : $%s?\n", new_st.name);
            fprintf(fp, "==> Soyadi : $%s?\n", new_st.surname);
            fprintf(fp, "==> Sinifi : $%s?\n", new_st.classs);
            fprintf(fp, "==> Yas : $%s?\n", new_st.age);
            fprintf(fp, "==> Cinsiyet : $%s?\n", new_st.gender);
            fprintf(fp, "==> Disiplin Kaydi : $%s?\n", new_st.discipline_n);
            fprintf(fp, "-------------------------------");


    fclose(fp);
    }
    else if(choice == 3)
    {
        FILE *fp = fopen(id, "r");

        if(fp == NULL)
        {
            printf("HATA!! Dosya Acilamadi..");
            exit(1);
        }

        Student new_st ;

        int m = 0, ctrl = 0 ;
        char temp;
        while( !feof(fp))
        {
            if( ( temp = fgetc(fp)) == EOF)
            {
                break;
            }

            if( temp == '$')
            {
                if(ctrl == 0)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.name[m++] = temp2 ;

                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.name[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;
                }
                else if(ctrl == 1)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.surname[m++] = temp2 ;

                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.surname[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 2)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.classs[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.classs[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 3)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.age[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.age[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 4)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.gender[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.gender[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else if(ctrl == 5)
                {
                    char temp2 = fgetc(fp);
                    do
                    {
                        new_st.discipline_n[m++] = temp2 ;
                    }while( ( temp2 = fgetc(fp)) != '?');

                    new_st.discipline_n[m] = '\0' ;
                    m = 0 ;
                    ctrl++ ;

                }
                else
                {
                    break;
                }

            }


        }
            printf("----------------------[ OGRENCI RAPORU ]-----------------------------\n\n");
            printf("==> Adi : %s\n\n", new_st.name);
            printf("==> Soyadi : %s\n\n", new_st.surname);
            printf("==> Sinifi : %s\n\n", new_st.classs);
            printf("==> Yas : %s\n\n", new_st.age);
            printf("==> Cinsiyet : %s\n\n", new_st.gender);
            printf("==> Disiplin Kaydi : %s\n\n", new_st.discipline_n);
            printf("----------------------------------------------------------------------");



        fclose(fp);
        int sure;
        printf("\n\n# Ogrenciyi Silmek Istiyor musunuz ? {onay icin '1' tuslayiniz}\n\n==> ");
        scanf("%d", &sure);
        printf("\n\n----------------------------------------------------------------------\n\n");

        if(sure == 1)
        {
        int del = remove(id);
        if (!del)
        {
            printf("Ogrenci Basariyla Silindi..");
            printf("\n\n----------------------------------------------------------------------\n\n");
        }


        else
        {
            printf("Ogrenci Silinemedi...");
            printf("\n\n----------------------------------------------------------------------\n\n");
        }

        }
        else
        {
            goto beginning;
        }

    }
    else
        {
            printf("Hatali Secim!!");
            exit(1);
        }

    char end;
    printf("\n\n\n# Tekrar Islem Yapmak Istiyor musunuz ?  \n");
    printf("Evet icin 'E' , Hayir icin 'H' tuslayiniz\n\n==> ");
    fflush(stdin);
    scanf(" %c", &end);

    if(end == 'E' || end == 'e')
    {
        goto beginning;
    }
    else
    {
        printf("\n\nIYI GUNLER........\n\n");
    }
    return 0;
}


void CreateStudent(Student* ptr, FILE *fileptr)
{
    char st_name[30], st_surname[30], st_gen[6], st_dis[250], st_clss[25], st_age[3];

    printf("# Ogrencinin Adini Giriniz :\n\n==> ");
    scanf("%s", st_name);
    printf("\n*********************************************************************\n\n");

    printf("# Ogrencinin Soyadini Giriniz :\n\n==> ");
    scanf("%s", st_surname);
    printf("\n*********************************************************************\n\n");

    printf("# Ogrencinin Cinsiyetini Giriniz :\n\n==> ");
    scanf("%s", st_gen);
    printf("\n*********************************************************************\n\n");

    printf("# Ogrencinin Sinifini Giriniz :\n\n==> ");
    scanf("%s", &st_clss);
    printf("\n*********************************************************************\n\n");

    printf("# Ogrencinin Yasini Giriniz :\n\n==> ");
    scanf("%s", st_age);
    printf("\n*********************************************************************\n\n");

    printf("# Ogrencinin Disiplin Durumunu Giriniz :\n\n==> ");
    scanf("%s", st_dis);
    printf("\n*********************************************************************\n\n");

    fprintf(fileptr, "-------------------------------\n\n");
    fprintf(fileptr, "==> Adi : $%s?\n", st_name);
    fprintf(fileptr, "==> Soyadi : $%s?\n", st_surname);
    fprintf(fileptr, "==> Sinifi : $%s?\n", st_clss);
    fprintf(fileptr, "==> Yas : $%s?\n", st_age);
    fprintf(fileptr, "==> Cinsiyet : $%s?\n", st_gen);
    fprintf(fileptr, "==> Disiplin Kaydi : $%s?\n", st_dis);
    fprintf(fileptr, "-------------------------------");




}
