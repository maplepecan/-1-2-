/* 4. Даны координаты двух противоположных вершин прямоугольника:
(x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат.
Найти периметр и площадь данного прямоугольника. */ 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int coord (char a, char b)
{
    printf("\n Введите координату %c%c точки : ", a, b);
    scanf("%d", &a);
    return (a);
}

int main (void)
{
    int x1 = coord('x','1');
    int y1 = coord('y','1');
    int x2 = coord('x','2');
    int y2 = coord('y','2'); 
    
    float P = 2 * (abs(x1-x2) + abs(y1-y2));
    float S = (float) abs(x1-x2) * abs(y1-y2);
    printf("\n Площадь = %f, периметр = %f", S, P);  
}