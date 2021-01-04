#include <stdio.h>
#include <stdlib.h>
// Reducing any mxn matrix to row echelon form....

int main()
{
     double** M = (double **) calloc(3,sizeof(double*));
    for(int i = 0; i < 3; ++i)
    {
        *(M + i) = (double*) calloc(3,sizeof(double));
    }

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("Enter Matrix[%d][%d] : ",i,j);
            scanf("%lf",&M[i][j]);

        }
    }

    eshelonform(M,3,3);
    return 0;
}

void eshelonform(double** M_e, int r_e, int c_e)
{

int n, step = 0, q = 0 ;
double pivot ;
int position[100]; // bu eþelon formunu bulduktan sonra indirgenmiþ eþelon haline getirmek için pivotlarýn indislerini tutmak amacýyla olusturulmus dizi.

for(int i = 0, n = 0, ctrl = 0; i < r_e ; ++i) // n degiskenini kullanma amacýmýz pivot bulduktan sonra bir sonraki satýra gecince arayacagimiz ikinci pivot diger pivottan sutun olarak ileride olmak zorunda oldugu icin.
{

    afterchangedrows:
    while(1)
    {
        if(M_e[i][n + ctrl] == 0)
        {
            ctrl++ ; // burada eger sifir olursa ctrl yi 1 arttiriyoruz bu sifir satiri olup olmadigini anlamamizi yardim ediyor..
        }

        else
        {
            n = n + ctrl ; // eger sifir satiri yok ise satirin 0 olmayan ilk elemanini seciyoruz ve sifir satiri bulma islemi dongusunu kirip cikiyoruz.
            break ;
        }

        if((n + ctrl) == c_e)
        {
            if(i == ( r_e - 1))
            {
                break;
            }
            changerows(i, i + 1, M_e, c_e) ; // eðer sifir satiri var ise bir sonraki satir ile degistirme islemini yapan fonksiyon..
            ctrl = 0 ;
            goto afterchangedrows ; // satir degisimi yapildiktan sonra satiri yeniden isleme almak icin basa donuyoruz.
        }



    }



    pivot = M_e[i][n] ;  // burada pivot 1 yapacagimiz satirin 0 olmayan ilk elemanini pivot degiskenine atiyoruz..

    if(pivot == 0) // burada eger olduda programýmýz pivotu 0 kabul etti  nolur nolmaz ileride sayi/0 durumu yasanmamasi icin kontrol yapiyoruz eger sýfýrsa diger satira gecsin.
    {
        continue;
    }

    position[q++] = (i*10 + n); // burada pivotun pozisyonunu, örneðin 5,7 ise  57 þekline çevirip tutuyor

    for(int k = 0; k < c_e; ++k)
    {
        M_e[i][k] = M_e[i][k] / pivot ; // burada pivotumuzu  1 yapmak için satýrý pivota bölüp  pivot 1 'mizi elde ediyoruz.
    }

    if(i >= r_e) // sonraki iþlemimiz olan pivotlarýmýzýn altýný sýfýrlama iþlemi için kontrol.
    {
        break;  // bu if yapýsýnýn amacý eðer son satýrdaysak altýný sýfýrlamamýza gerek olmadýðý için (çünkü daha alt yok) kontrolünü yapar.
    }

    double underpivot;
    for(int b = i + 1 ; b < r_e; ++b )
    {
        underpivot = M_e[b][n];
        for(int f = 0; f < c_e; ++f )
        {
            M_e[b][f] = M_e[b][f] - ( underpivot * M_e[i][f]   ) ; // burada lineer cebirin elemanter satýr iþleminin bir satýrý bir skaler ile çarpýp diðer satýra ekleme iþlemini yapýyoruz yani pivot 1 'in altýný sýfýrý yapmak için sýrasýyla hemen altýndaki satýrdaki skaleri, mevcut bulunduðumuz satýrdaki elemanlara çarpýp, skalerin bulunduðu satýrdaki elemanlardan çýkartýyoruz. (biraz karýþýk :))
        }
    }


    printf("\nStep %d : \n==>{",++step) ;

    for(int j = 0; j < r_e; ++j)
    {
        for(int k = 0; k < c_e; ++k)
        {
            printf(" %.2lf ",M_e[j][k]) ; //burada adým adým yaptýðýmýz deðiþiklikleri yazdýrýyoruz. algoritmanýn dðru çalýþýp çalýþmadýðýný kontrol etmek için.
        }
        printf("\n   ") ;
    }


}

        for(int m = 0; m < r_e; ++m)
    {
        for(int j = 0; j < c_e; ++j)
        {
            if( M_e[m][j] == -0.00 ) // yaptýðýmýz çýkartma iþleminden sonra c derleyicinin hatasý mý bilmiyorum -0.00 gibi deðerler yazdýrýyor. bunu düzeltmek için tüm elemanlarý kontrol ediyoruz..
            {
                M_e[m][j] = 0 ;
            }
        }
    }

    for(int m = 0, x, y; m < q; ++m)
    {

        x = position[m] % 10 ;
        position[m] = position[m] / 10 ;
        y = position[m] % 10 ;

        for(int j = (y - 1) ; j >= 0; j--) // burada son islemimiz olan indirgenmis eselon halini dönüþtürme iþlemini yapýyoruz. yani pivotlarýn üstündeki elemanlarý 0 yapýyoruz. uzun uzun çýkartma iþlemi yapmak yerine ayný iþlem olan pivotun üstündeki deðerler direkt sýfýr atýyoruz.
        {
            M_e[j][x] = 0 ;
        }
    }

    printf("\nStep %d : \n==>{",++step) ;

    for(int j = 0; j < r_e; ++j)
    {
        for(int k = 0; k < c_e; ++k)
        {
            printf(" %.2lf ",M_e[j][k]) ; // burada da son halini yani indirgenmiþ eþelon halini yazdýrýyoruz ve programýmýzý bitiriyoruz.
        }
        printf("\n   ") ;
    }
}


void changerows(int i, int j, double** M_c, int c_c)
{
    double temp ;
        for(int k = 0; k < c_c; ++k)
        {
            temp = M_c[i][k] ;
            M_c[i][k] = M_c[j][k] ;
            M_c[j][k] = temp ;
        }
}
