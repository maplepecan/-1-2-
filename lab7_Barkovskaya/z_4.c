// Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км.
// Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. 

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    float V1, V2, S, T, Result;
    printf("\n Введите V1 : ");
    scanf("%f", &V1);
    printf("\n Введите V2 : ");
    scanf("%f", &V2);
    printf("\n Введите S : ");
    scanf("%f", &S);
    printf("\n Введите T : ");
    scanf("%f", &T);
    Result = S + V1 * T + V2 * T;
    printf("\n Расстояние между автомобилями через Т часов = %f километров", Result);
    return(0);
}