// Даны три числа. Найти сумму двух наибольших из них

#include <stdio.h>

int main()
{
    int A, B, C, sum;
    printf("A : ");
    scanf("%d", &A);
    printf("\nB : ");
    scanf("%d", &B);
    printf("\nC : ");
    scanf("%d", &C);
    if (((A >= B) && (B > C)) || ((B >= A) && (A > C))) sum = A + B;
    else if (((A >= C) && (C > B)) || ((C >= A) && (A > B))) sum = C + A;
    else if (((B >= C) && (C > A)) || ((C >= B) && (B > A))) sum = C + B;
    else if ((A > B) && (B == C)) sum = A;
    else if ((B > A) && (A == C)) sum = B;
    else sum = C;
    printf("\nsum = %d", sum);
    return (0);
}