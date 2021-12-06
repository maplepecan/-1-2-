// Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».

#include <stdio.h>

int main (void)
{
    int a, b, c;
    printf("A = ");
    scanf("%d", &a);
    printf("\nB = ");
    scanf("%d", &b);
    printf("\nC = ");
    scanf("%d", &c);
    if ((a < b) && (b < c)) printf("\n A < B < C is true");
    else printf("\nA < B < C is false");
    return (0);
}