// Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».

#include <stdio.h>

int main (void)
{
    int a,x,y,z,w;
    printf("\nEnter A : ");
    scanf("%d", &a);
    x = a / 1000;
    y = a / 100;
    y = y % 10;
    z = a / 10;
    z = z % 10;
    w = a % 10;
   // printf("\n x = %d, y = %d, z = %d, w = %d",x,y,z,w);
    if ((x == w) && (y == z)) printf("\nTrue");
    else printf("\nFalse");
    return (0);
}