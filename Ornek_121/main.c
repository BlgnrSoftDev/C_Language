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
int position[100]; // bu e�elon formunu bulduktan sonra indirgenmi� e�elon haline getirmek i�in pivotlar�n indislerini tutmak amac�yla olusturulmus dizi.

for(int i = 0, n = 0, ctrl = 0; i < r_e ; ++i) // n degiskenini kullanma amac�m�z pivot bulduktan sonra bir sonraki sat�ra gecince arayacagimiz ikinci pivot diger pivottan sutun olarak ileride olmak zorunda oldugu icin.
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
            changerows(i, i + 1, M_e, c_e) ; // e�er sifir satiri var ise bir sonraki satir ile degistirme islemini yapan fonksiyon..
            ctrl = 0 ;
            goto afterchangedrows ; // satir degisimi yapildiktan sonra satiri yeniden isleme almak icin basa donuyoruz.
        }



    }



    pivot = M_e[i][n] ;  // burada pivot 1 yapacagimiz satirin 0 olmayan ilk elemanini pivot degiskenine atiyoruz..

    if(pivot == 0) // burada eger olduda program�m�z pivotu 0 kabul etti  nolur nolmaz ileride sayi/0 durumu yasanmamasi icin kontrol yapiyoruz eger s�f�rsa diger satira gecsin.
    {
        continue;
    }

    position[q++] = (i*10 + n); // burada pivotun pozisyonunu, �rne�in 5,7 ise  57 �ekline �evirip tutuyor

    for(int k = 0; k < c_e; ++k)
    {
        M_e[i][k] = M_e[i][k] / pivot ; // burada pivotumuzu  1 yapmak i�in sat�r� pivota b�l�p  pivot 1 'mizi elde ediyoruz.
    }

    if(i >= r_e) // sonraki i�lemimiz olan pivotlar�m�z�n alt�n� s�f�rlama i�lemi i�in kontrol.
    {
        break;  // bu if yap�s�n�n amac� e�er son sat�rdaysak alt�n� s�f�rlamam�za gerek olmad��� i�in (��nk� daha alt yok) kontrol�n� yapar.
    }

    double underpivot;
    for(int b = i + 1 ; b < r_e; ++b )
    {
        underpivot = M_e[b][n];
        for(int f = 0; f < c_e; ++f )
        {
            M_e[b][f] = M_e[b][f] - ( underpivot * M_e[i][f]   ) ; // burada lineer cebirin elemanter sat�r i�leminin bir sat�r� bir skaler ile �arp�p di�er sat�ra ekleme i�lemini yap�yoruz yani pivot 1 'in alt�n� s�f�r� yapmak i�in s�ras�yla hemen alt�ndaki sat�rdaki skaleri, mevcut bulundu�umuz sat�rdaki elemanlara �arp�p, skalerin bulundu�u sat�rdaki elemanlardan ��kart�yoruz. (biraz kar���k :))
        }
    }


    printf("\nStep %d : \n==>{",++step) ;

    for(int j = 0; j < r_e; ++j)
    {
        for(int k = 0; k < c_e; ++k)
        {
            printf(" %.2lf ",M_e[j][k]) ; //burada ad�m ad�m yapt���m�z de�i�iklikleri yazd�r�yoruz. algoritman�n d�ru �al���p �al��mad���n� kontrol etmek i�in.
        }
        printf("\n   ") ;
    }


}

        for(int m = 0; m < r_e; ++m)
    {
        for(int j = 0; j < c_e; ++j)
        {
            if( M_e[m][j] == -0.00 ) // yapt���m�z ��kartma i�leminden sonra c derleyicinin hatas� m� bilmiyorum -0.00 gibi de�erler yazd�r�yor. bunu d�zeltmek i�in t�m elemanlar� kontrol ediyoruz..
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

        for(int j = (y - 1) ; j >= 0; j--) // burada son islemimiz olan indirgenmis eselon halini d�n��t�rme i�lemini yap�yoruz. yani pivotlar�n �st�ndeki elemanlar� 0 yap�yoruz. uzun uzun ��kartma i�lemi yapmak yerine ayn� i�lem olan pivotun �st�ndeki de�erler direkt s�f�r at�yoruz.
        {
            M_e[j][x] = 0 ;
        }
    }

    printf("\nStep %d : \n==>{",++step) ;

    for(int j = 0; j < r_e; ++j)
    {
        for(int k = 0; k < c_e; ++k)
        {
            printf(" %.2lf ",M_e[j][k]) ; // burada da son halini yani indirgenmi� e�elon halini yazd�r�yoruz ve program�m�z� bitiriyoruz.
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
