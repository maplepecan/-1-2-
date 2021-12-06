// Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка

#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int coord (char a)
{
    printf("\n Enter the coordinates %c: ", a);
    scanf("%d", &a);
    return (a);
}

int main (void)
{
    int x = 0;
    int y = 0;
    while (x == 0) 
    {
        x = coord('x');
        if (x == 0) printf("\n Error! x = 0!");
    }
    while (y == 0) 
    {
        y = coord('y');
        if (y == 0) printf("\n Error! y = 0!");
    }

    if ((x > 0) && (y > 0)) printf("\n 1 quarter");
    else if ((x < 0) && (y > 0)) printf("\n 2 quarter");
    else if ((x < 0) && (y < 0)) printf("\n 3 quarter");
    else printf("\n 4 quarter");
    return (0);
}