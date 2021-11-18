// . Даны целые положительные числа A и B (A > B). 
// На отрезке длины A размещено максимально возможное 
// количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.

#include <stdio.h>
#include <math.h>

int main (void)
{
    int A = 0;
    int B = 0;
    int kolB;
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
        if (B <= 0) printf("\n B must be greater than 0");
    }
    kolB = A / B;
    A = A - B*kolB;
    printf(" \n Length = %d", A);
    return 0;
}