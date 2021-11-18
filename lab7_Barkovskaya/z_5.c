// Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).

#include <stdio.h>
#include <math.h>

int main (void)
{
    float X, B;
    float A = 0;
    while (A == 0)
    {
        printf("\n Enter A : ");
        scanf("%f", &A);
        if (A == 0) printf ("\n A can not be equal to 0");
    }
    printf("\n Enter B : ");
    scanf("%f", &B);
    if (B == 0) 
    {
        printf("\n X = 0");
    } else
    {
        X = (-1)*B/A;
        printf("X = %f", X);
    }
    return(0);
}