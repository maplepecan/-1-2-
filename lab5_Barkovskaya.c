#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void number (int n)
{
    printf("\n \n ЗАДАНИЕ № %d", n);
}

int coord (char a, char b)
{
    printf("\n Введите координату %c%c точки : ", a, b);
    scanf("%d", &a);
    return (a);
}

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

/*float dist_prov (float d)
{
    if (d < 0) d = -d;
    return (d);
}*/

int main (void)
{
    /* Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2) */
    number(1);
    int x1 = coord('x','1');
    int y1 = coord('y','1');
    int x2 = coord('x','2');
    int y2 = coord('y','2'); 
    float distance = (float) sqrt(pow((x2-x1),2) + (pow((y2-y1),2)));
    printf("\n Расстояние между точками = %f", distance);

/* 2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC
      и BC и их сумму. */

    number(2);
    int A = point('A');
    int B = point('B');
    int C = point('C');
    float distance1 = dist(A, C);
    if (distance1 < 0) distance1 = distance1 * (-1);
    printf("\n Длина AC = %f, ", distance1);
    float distance2 = dist(B,C);
    if (distance2 < 0) distance2 = distance2 * (-1);
    printf("длина BC = %f, ", distance2);
    distance = distance1 + distance2;
    printf("их сумма = %f", distance); 


/* 3. Даны три точки A, B, C на числовой оси. Точка C расположена
   между точками A и B. Найти произведение длин отрезков AC и BC */

    number(3);
    A = point('A');
    B = point('B');
    float C3;
    distance = dist(A,B);
    printf("\n distance = %f", distance);
    if (distance <0) 
    {
        C3 = A + distance / (-2) ;
    } else if (distance > 0)
    {
        C3 = B + distance / 2 ;
    } else 
    {
        C3 = A;
    }
    printf("\nC = %f", C3);
    float AC = dist(A,C3);
    float BC = dist(B,C3);
    if (AC < 0) AC = -AC;
    if (BC < 0) BC = -BC;
    printf("\n Произведение длин отрезков AC и BC = %f", AC*BC); 

    /* 4. Даны координаты двух противоположных вершин прямоугольника:
(x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат.
Найти периметр и площадь данного прямоугольника. */ 

    number(4);
    x1 = coord('x','1');
    y1 = coord('y','1');
    x2 = coord('x','2');
    y2 = coord('y','2'); 
    
    float P = 2 * (abs(x1-x2) + abs(y1-y2));
    float S = (float) abs(x1-x2) * abs(y1-y2);
    printf("\n Площадь = %f, периметр = %f", S, P);    

    /* Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь */

   number(5);
    x1 = coord('x','1');
    y1 = coord('y','1');
    x2 = coord('x','2');
    y2 = coord('y','2'); 
    x3 = coord('x','3');
    y3 = coord('y','3'); 

    A=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    B=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    C=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
 
    P = a + b +c;
    float pp = (a + b + c) / 2;
    S=sqrt(pp*(pp-a)*(pp-b)*(pp-c));
    printf("\n Площадь = %f, периметр = %f",S, P);

    return(0);
}


