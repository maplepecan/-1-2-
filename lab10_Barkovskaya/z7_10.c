// Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».

#include <stdio.h>
#include <math.h>

int main (void)
{
    int a, b, c;
    printf("A = ");
    scanf("%d", &a);
    printf("\nB = ");
    scanf("%d", &b);
    printf("\nC = ");
    scanf("%d", &c);
    if (a + b > c) printf("\nTrue");
    else printf("\nFalse");
    return (0);
}