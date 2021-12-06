// На плоскости расположены три точки: A, B, C. 
// Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.

#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int coord (char a, char x)
{
    printf("\n Enter the coordinates %c %c: ", a, x);
    scanf("%d", &a);
    return (a);
}

int main (void)
{
    int x1 = coord('x','A');
    int y1 = coord('y','A');
    int x2 = coord('x','B');
    int y2 = coord('y','B');
    int x3 = coord('x','C');
    int y3 = coord('y','C'); 
    float distAB = (float) sqrt(pow((x2-x1),2) + (pow((y2-y1),2)));
    float distAC = (float) sqrt(pow((x3-x1),2) + (pow((y3-y1),2)));
    if (distAB < distAC) printf("\n B, distance = %f", distAB);
    else if (distAB > distAC) printf("\n C, distance = %f", distAC);
    else printf("AB = AC");
    return (0);
}