/* 3. Даны три точки A, B, C на числовой оси. Точка C расположена
   между точками A и B. Найти произведение длин отрезков AC и BC */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float point (char a)
{   
    float b;
    printf("\n Enter the point %c : ", a);
    scanf("%f", &b);
    return (b);
}

float dist (float point1, float point2)
{
    float dist = point1 - point2;
    // if (dist<0) dist = -dist;
    return(dist);
}

int main (void)
{
    float A = point('A');
    float B = point('B');
    printf("\n A = %lf, B = %lf", A, B);
    float C;
    float distance = dist(A, B);
    printf("\n distance = %f", distance);
    if (distance <0) 
    {
        C = A + distance / (-2) ;
    } else if (distance > 0)
    {
        C = B + distance / 2 ;
    } else 
    {
        C = A;
    }
    printf("\nC = %f", C);
    float AC = dist(A,C);
    float BC = dist(B,C);
    if (AC < 0) AC = -AC;
    if (BC < 0) BC = -BC;
    printf("\n AC * BC = %f", AC * BC);  
    return(0);
}