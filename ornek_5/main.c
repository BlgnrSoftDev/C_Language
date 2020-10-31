#include <stdio.h>
#include <stdlib.h>

int main()
{
    double odev1,odev2,odev3,quiz1,quiz2,quiz3,arasinav1,arasinav2,finalsinav,not;
    printf("ilk odevin notunu giriniz:       \t");
    scanf("%lf",&odev1);
    printf("ikinci odevin notunu giriniz:    \t");
    scanf("%lf",&odev2);
    printf("ucuncu odevin notunu giriniz:    \t");
    scanf("%lf",&odev3);
    printf("ilk quizin notunu giriniz:       \t");
    scanf("%lf",&quiz1);
    printf("ikinci quizin notunu giriniz:    \t");
    scanf("%lf",&quiz2);
    printf("ucuncu quizin notunu giriniz:    \t");
    scanf("%lf",&quiz3);
    printf("ilk arasinavin notunu giriniz:   \t");
    scanf("%lf",&arasinav1);
    printf("ikinci arasinavin notunu giriniz:\t");
    scanf("%lf",&arasinav2);
    printf("final notunu giriniz:           \t");
    scanf("%lf",&finalsinav);
    printf("\n");

    not=(odev1+odev2+odev3)*9/300+(quiz1+quiz2+quiz3)*21/300+(arasinav1+arasinav2)*30/200+finalsinav*40/100;

    printf("Donem sonu notunuz:\t%.2lf",not);
    return 0;
}
