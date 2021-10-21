// Найти значение функции y = 3x^6 − 6x^2 − 7 при данном значении x 

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    printf("\n Введите значение х : ");
    scanf("%d", &x);
    int y = 3 * pow(x,6) - 6 * pow(x,2) - 7;
    printf("\n y = %d", y);
    return(0);
}
