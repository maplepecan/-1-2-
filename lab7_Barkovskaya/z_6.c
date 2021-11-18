// Найти решение системы линейных уравнений вида 
// A1·x + B1·y = C1, 
// A2·x + B2·y = C2

#include <stdio.h>
#include <math.h>

float func (char ch0, int ch1)
{
    float k;
    printf("\n Enter %c%d : ", ch0, ch1);
    scanf("%f", &k);
    return(k);
}

int main (void)
{
    float A1, A2, B1, B2, C1, C2, x, y, D;
    A1 = func ('A', 1);
    A2 = func ('A', 2);
    B1 = func ('B', 1);
    B2 = func ('B', 2);
    C1 = func ('C', 1);
    C2 = func ('C', 2);
    D = A1 * B2 - A2 * B1;
    x = (C1 * B2 - C2 * B1) / D;
    y = (A1 * C2 - C1 * A2) / D;
    printf("\n x = %f, y = %f", x, y);
    return(0);
}