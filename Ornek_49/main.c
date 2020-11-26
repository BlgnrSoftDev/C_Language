#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Klavyeden karakter dizisi okuma ve yazma
    char dizi[50+1];
    printf("bir metin giriniz :\t");
    scanf("%s",dizi);
    for(int i = 0;dizi[i];i++){
        printf("%c\n",dizi[i]);

    }
    return 0;
}
