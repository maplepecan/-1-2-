 /* Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int coord (char a, char b)
{
    printf("\n Enter the coordinates %c%c : ", a, b);
    scanf("%d", &a);
    return (a);
}

int main (void)
{
    int x1 = coord('x','1');
    int y1 = coord('y','1');
    int x2 = coord('x','2');
    int y2 = coord('y','2'); 
    int x3 = coord('x','3');
    int y3 = coord('y','3');

    float a = (float) sqrt(pow((x2-x1),2) + (pow((y2-y1),2)));
    float b = (float) sqrt(pow((x3-x2),2) + (pow((y3-y2),2)));
    float c = (float) sqrt(pow((x3-x1),2) + (pow((y3-y1),2)));

    float P = a + b + c;
    float PP = P / 2;

    float S = sqrt(PP * (PP - a) * (PP - b) * (PP - c));
    printf("\n Square = %f, Perimeter = %f", S, P);
    return(0);
}