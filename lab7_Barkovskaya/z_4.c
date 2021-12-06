// Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км.
// Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. 

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    float V1, V2, S, T, Result;
    printf("\n Enter V1 km/h : ");
    scanf("%f", &V1);
    printf("\n Enter V2 km/h : ");
    scanf("%f", &V2);
    printf("\n Enter S km : ");
    scanf("%f", &S);
    printf("\n Enter T h : ");
    scanf("%f", &T);
    Result = S + V1 * T + V2 * T;
    printf("\n Distance between cars in T hours = %f km", Result);
    return(0);
}