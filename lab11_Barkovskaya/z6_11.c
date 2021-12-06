// Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.

#include <stdio.h>

int main()
{
    int a = 0;
    while ((a < 1) || (a > 999))
    {
        printf("\n Enter a : ");
        scanf("%d", &a);
        if ((a < 1) || (a > 999)) printf("\n 1 < a < 999");
    }
    if (a % 2 == 0) printf ("\n Chetnoe");
    else printf("\n Nechetnoe");
    if (a < 10) printf (" odnoznachnoe chislo");
    else if ((a > 9) && (a < 100)) printf (" dvuznachnoe chislo");
    else printf (" trehznachnoe chislo");
    return (0);
}