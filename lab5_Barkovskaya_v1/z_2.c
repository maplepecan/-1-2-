/* 2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC
      и BC и их сумму. */
      
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int point (char a)
{
    printf("\n Введите точку %c : ", a);
    scanf("%d", &a);
    return (a);
}

float dist (int point1, int point2)
{
    float dist = (float) point1 - point2;
    // if (dist<0) dist = -dist;
    return(dist);
}

int main (void)
{
    int A = point('A');
    int B = point('B');
    int C = point('C');
    float distance1 = dist(A, C);
    if (distance1 < 0) distance1 = distance1 * (-1);
    printf("\n Длина AC = %f, ", distance1);
    float distance2 = dist(B,C);
    if (distance2 < 0) distance2 = distance2 * (-1);
    printf("длина BC = %f, ", distance2);
    float distance = distance1 + distance2;
    printf("их сумма = %f", distance); 
    return(0);
}