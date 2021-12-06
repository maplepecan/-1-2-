// Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.

#include <stdio.h>

int main()
{
    int a;
    printf("\n Enter a : ");
    scanf("%d", &a);
    if (a < 0) printf ("\n Otritsatelnoe");
    else if (a > 0) printf ("\n Poloshitelnoe");
    if (a == 0) printf ("\n Nulevoe chislo");
    else if (a % 2 == 0 ) printf (" chetnoe chislo");
    else if (a % 2 != 0) printf (" nechetnoe chislo");

    return (0);
}