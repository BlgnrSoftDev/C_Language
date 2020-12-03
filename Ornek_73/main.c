#include <stdio.h>

int Toplam(int, int);
int Toplam2(int);
unsigned long long Carpim(int);
float Ikiyebol(int n);
int Us(int taban, int us);
int Us2(int taban, int us, int i);

int main()
{

    /*int i, n;
    n = 5;
    int sonuc = 0;
    for(i=1; i <= n; i++)
    {
        sonuc += i;
    }*/


    //printf("1'den %d'e kadar olan sayilarin toplami: %d\n",n,sonuc);

    //printf("Toplam() = %d\n",Toplam(1,n));
    //printf("Toplam() = %d\n",Toplam2(n));

    int n = 18;
    printf("Carpim() = %llu\n\n\n",Carpim(n));

    printf("Ikiyebol() = %f\n\n",Ikiyebol(3));

    printf("Us() = %d\n\n",Us(3,4));
    printf("Us2() = %d\n\n",Us2(3,4,1));




    return 0;
}


int Us(int taban, int us)
{
    int i;
    int sonuc=1;
    for(i=1; i<=us; i++)
    {
        sonuc = sonuc * taban;
    }
    return sonuc;
}


int Us2(int taban, int us, int i)
{
    if(i > us)
    {
        return 1;
    }
    return taban * Us2(taban, us, i+1);
}


int Toplam(int b, int n)
{
    int i;
    int total = 0;
    for(i=b; i <= n; i++)
    {
        total += i;
    }
    return total;
}


int Toplam2(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    return n + Toplam2(n-1);
}


unsigned long long Carpim(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * Carpim(n-1);
}


float Ikiyebol(int n)
{
    return (float)n/2;
}
