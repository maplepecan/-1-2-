// Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».

#include <stdio.h>

int main (void)
{
    int a = -1;
    while (a<0) {
        printf("\nEnter int A > 0 : ");
        scanf("%d", &a);
        if (a<0) printf ("Error! A < 0!");
    }
    if ((a % 2 == 0) && (a >= 10) && (a <= 99)) printf("\nTrue");
    else printf("\nFalse");
    return (0);
}