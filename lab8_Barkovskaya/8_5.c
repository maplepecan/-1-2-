// Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.

#include <stdio.h>
#include <math.h>

int main (void)
{

    int A = -1;
    int flag1 = 0; // Отвечает за отрицательные числа
    while ( (A <= -1000) || ( (A >= -99) && (A <= 99) ) || (A >= 1000) )
    {
        printf("\n Enter a three digit number : ");
        scanf("%d", &A);
        if ( (A <= -1000) || ( (A >= -99) && (A <= 99) ) || (A >= 1000) ) printf("\n The number must be three digit");
    }
    if (A < 0)
    {
        flag1 = 1;
        A = -A;
    }
    int x = A / 100;
    int y = A / 10;
    y = y % 10;
    int z = A % 10;
    A = z*100 + y*10 + x;
    if ((A > 100) && (flag1 == 0)) printf("\n New A = %d", A);
    if ((A > 100) && (flag1 == 1)) printf("\n New A = -%d", A);
    if ((A < 100) && (A > 9) && (flag1 == 0)) printf("\n New A = 0%d", A);
    if ((A < 100) && (A > 9) && (flag1 == 1)) printf("\n New A = -0%d", A);
    if ((A < 10) && (flag1 == 0)) printf("\n New A = 00%d", A);
    if ((A < 10) && (flag1 == 1)) printf("\n New A = -00%d", A);

    printf("\n A = %d, x = %d, y = %d, z = %d", A, x, y, z);
    return 0;
}