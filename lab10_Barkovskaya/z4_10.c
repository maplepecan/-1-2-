// Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».

#include <stdio.h>

int main (void)
{
    int a,x,y,z;
    printf("\nEnter A : ");
    scanf("%d", &a);
    x = a / 100;
    y = a / 10;
    y = y % 10;
    z = a % 10;
    // printf("\n x = %d, y = %d, z = %d",x,y,z);
    if (((x < y) && (y < z)) || ((x > y) && (y > z))) printf("\nTrue");
    else printf("\nFalse");
    return (0);
}