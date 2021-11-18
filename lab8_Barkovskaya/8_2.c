// Даны целые положительные числа A и B (A > B). 
// На отрезке длины A размещено максимально возможное 
// количество отрезков длины B (без наложений). Найти количество отрезков B, 
// размещенных на отрезке A.

#include <stdio.h>
#include <math.h>

int main (void)
{
    int A = 0;
    int B = 0;
    while (A <= 0)
    { 
        printf("\n Enter A : ");
        scanf("%d", &A);
        if (A <= 0) printf("\n A must be greater than 0");
    }
    while (B <= 0)
    {
        printf("\n Enter B : ");
        scanf("%d", &B);
        if (B <= 0) printf("\n B A must be greater than 0");
    }
    B = A / B;
    printf(" \n The number of segments B in A = %d", B);
    return 0;
}