// Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    int A = -1;
    int flag1 = 0; // Отвечает за отрицательные числа
    int flag2 = 0; // Отвечает за числа 10, 20, 30...
    while ( (A <= -100) || ( (A >= -9) && (A <= 9) ) || (A >= 100) )
    {
        printf("\n Enter a two digit number : ");
        scanf("%d", &A);
        if ( (A <= -100) || ( (A >= -9) && (A <= 9) ) || (A >= 100) ) printf("\n The nubmer must be three digit");
    }
    if (A < 0)
    {
        flag1 = 1;
        A = -A;
    }
    if (A % 10 == 0) flag2 = 1;

    // printf("\n A = %d, flag1 = %d, flag2 = %d", A, flag1, flag2);
    
    int y = A % 10;
    int x = A / 10;
    if (x == 0) A = y * 10;
    else A = y * 10 + x; 

    // printf("\n x = %d, y = %d,  new A = %d", x,y, A);

    if ((flag1 == 0 ) && (flag2 == 0)) printf("\n New number = %d ", A);
    else if ((flag1 == 1) && (flag2 ==0)) printf("\n New number = -%d ", A);
    else if ((flag1 == 0) && (flag2 == 1)) printf("\n New number = 0%d", A);
    else if ((flag1 == 1) && (flag2 == 1)) printf("\n New number = -0%d");

    return 0;
}