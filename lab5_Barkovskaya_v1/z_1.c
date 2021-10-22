/* Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2) */
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
    float distance = (float) sqrt(pow((x2-x1),2) + (pow((y2-y1),2)));
    printf("\n Расстояние между точками = %f", distance);
    return(0);
}