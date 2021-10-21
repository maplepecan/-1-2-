// Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2 при данном значении x

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    printf("\n Введите значение х : ");
    scanf("%d", &x);
    x = x-3;
    int y = 4 * pow(x,6) - 7 * pow(x,3) + 2;
    printf("\n y = %d", y);
    return(0);
}
