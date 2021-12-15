// Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»

#include <stdio.h>

int main (void)
{
    int a, b;
    printf("A = ");
    scanf("%d", &a);
    printf("\nB = ");
    scanf("%d", &b);
    if ((a > 2) && (b <= 3)) printf("\ntrue");
    else printf("\nfalse");
    return (0);
}