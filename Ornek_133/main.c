#include <stdio.h>
#include <stdlib.h>
/*
• 2 tane öðrencinin aþaðýdaki bilgileri klavyeden okunacak
ve daha sonra “ogrenci.txt” isim dosyaya yazdýrýlacaktýr.
• No: int
• Ad: char[50];
• Not: int
• Klavyeden okuma ve dosyaya yazma iþlemleri için
aþaðýdaki fonksiyon kullanýlacaktýr.
• void DosyaYaz()
• Daha sonra dosya okuma iþlemi yapýlarak, okunan
bilgiler ekrana yazdýrýlacaktýr.
• void DosyaOku() */
struct O
{
    char Ad[20];
    char Soyad[20];
    int No;
};

typedef struct O OgrId ;

void DosyaYaz(OgrId *ogrnclr, int size, char* name);
void DosyaOku( int size, char* name);

int main()
{
    OgrId Ogrenciler[2] ;
    OgrId *strctptr = &Ogrenciler[0] ;
    char dosyadi[20];

    printf("==>Dosyanin adini giriniz : ");
    scanf("%s", dosyadi);

    printf("\n==>Ogrencilerin bilgilerini giriniz : \n\n ");
    for(int i = 0; i < 2; i++)
    {
        printf("\t%d. ogrencinin adi : ", i + 1);
        scanf("\t%s", (strctptr + i)->Ad);
        printf("\t%d. ogrencinin soyadi : ", i + 1);
        scanf("\t%s", (strctptr + i)->Soyad);
        printf("\t%d. ogrencinin no'su : ", i + 1);
        scanf("\t%d", &((strctptr + i)->No));
        printf("\n ------------------------------------------------- \n\n");
    }


    DosyaYaz(strctptr, 2, dosyadi);
    DosyaOku( 2, dosyadi);
    return 0;
}

void DosyaYaz(OgrId *ogrnclr, int size, char* name)
{
    FILE *fp ;
    fp = fopen(name, "w");
    for(int i = 0; i < 2; ++i)
    {
        fprintf(fp, "%s %s %d", (ogrnclr+i)->Ad, (ogrnclr+i)->Soyad, (ogrnclr+i)->No);
    }
    fclose(fp);
}


void DosyaOku( int size, char* name)
{
    char a[30], b[30] ;
    int f ;
    FILE *fp2 ;
    fp2 = fopen(name, "r");

    printf("\n--------------------------GIRILEN BILGILER-------------------------------\n");
    for(int i = 0; i < size ; ++i)
    {
        fscanf(fp2, "%s %s %d", a, b, &f) ;
        printf("==> %d. Ogrencinin,\n\t Adi : %s\n\t Soyadi : %s\n\t No : %d\n\n" , i + 1, a, b, f);
    }


    fclose(fp2);
}
