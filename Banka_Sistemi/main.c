#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    printf("\n--------| UYDURUK BANK'A HOSGELDINIZ |-------------\n\n");
    first_menu();
    create_acc();



    return 0;
}

void first_menu(void)
{
    char ans1;
    printf("# Islem Tipinizi Seciniz\n");
    printf("1-) Hesap Olustur\n");
    printf("2-) Hesap Girisi Yap\n\n==> ");
    scanf("%c", &ans1);
    printf("\n-------------------------------------------------------\n\n");

    if(ans1 == 1)
    {
        create_acc();
    }
    else if(ans1 == 2)
    {
        //login();
    }

}

void create_acc()
{
    char name[30], surname[30], date[30], mom[30], credit_num1[25];
    long long credit_num, id;
    int password;
    printf("# Adinizi Giriniz :\n\n==> ");
    scanf("%s", name);
    printf("\n-------------------------------------------------------\n\n");
    printf("# Soyadinizi Giriniz :\n\n==> ");
    scanf("%s", surname);
    printf("\n-------------------------------------------------------\n\n");
    printf("# TC kimlik no'yu giriniz :\n\n==> ");
    scanf("%lld", &id);
    printf("\n-------------------------------------------------------\n\n");
    printf("# Anne Kizlik Soyadini Giriniz :\n\n==> ");
    scanf("%s", mom);
    printf("\n-------------------------------------------------------\n\n");
    printf("# Dogum Tarihini Giriniz ( gun/ay/yil ) :\n\n==> ");
    scanf("%s", date);
    printf("\n-------------------------------------------------------\n\n");

    srand(time(0));
    credit_num = ( rand() % 100000000 ) + 100000000 ;
    password = ( rand() % 1000) + 1000 ;

    lltoa(credit_num, credit_num1, 10);
    strcat(credit_num1, ".txt");

    FILE *fp = fopen(credit_num1, "w+");
    if(fp == NULL)
    {
        printf("HESAP OLUSTURULAMADI...\n");
        exit(1);
    }


    fprintf(fp,"------- KULLANICI BILGILERI --------\n\n");
    fprintf(fp,"Ad : $%s ?\n", name);
    fprintf(fp,"Soyad : $%s ?\n", surname);
    fprintf(fp,"Tc : $%lld ?\n", id);
    fprintf(fp,"Dogum Tarihi : $%s ?\n", date);
    fprintf(fp,"Anne kizlik : $%s ?\n\n", mom);
    fprintf(fp,"---------------------------------");


    fclose(fp);
}
