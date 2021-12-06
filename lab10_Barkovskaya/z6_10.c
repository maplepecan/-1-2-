// Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».

#include <stdio.h>
#include <math.h>

int main (void)
{
    int a, b, c;
    printf("A (cathet) = ");
    scanf("%d", &a);
    printf("\nB (cathet) = ");
    scanf("%d", &b);
    printf("\nC (hypotenuse) = ");
    scanf("%d", &c);
    if (sqrt(a * a + b * b) == c) printf("\nTrue");
    else printf("\nFalse");
}