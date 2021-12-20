#include <stdio.h>
#include <stdlib.h>

int main ()
{
    system("chcp 65001");
    system("cls");

    int N, number, n, a = 0, fff, b = 0, c, sq, ost, y, w, x, z, max, min, j, i; 
    float xa, ya, xb, yb, xc, yc, ab, ac; 
    int k = 0, sum = 0; 
    float s = 1000; 
    int f1 = 1, f2 = 1, f = 0, kk = 2;
    printf("\n Ввведите номер задания : ");
    scanf("%d", &number);
    switch (number)
    {
        case 1:
        
            printf("\n Введите А : "); scanf("%i", &a);
            printf("\n Введите В : "); scanf("%i", &b);
            if ((a > 0) && (b > 0))
            {
                while (a > b || a < 0 || b < 0);
                for (i = a; i < b + 1; i++)
                {
                    for (j = 0; j < i; j++)
                    {
                        printf("%d", i);
                    }
                    printf("   ");
                }
            }
            else
            {
                printf("\n Ошибка! Числа должны быть больше нуля и A < B.");
            }
        break;
        case 2:
            printf("\n Введите длину отрезка А: "); scanf("%d", &a);
            printf("\n Введите длину отрезка В: "); scanf("%d", &b);
            if (a > b)
            {
                while (a - b >= 0)
                {
                    a = a - b;
                }
                printf("\n Длина незанятой части : %d", a);
            }
            else
            {
                printf("\n Ошибка! Числа должны быть больше нуля и A > B.");
            }
        break;
        case 3:
             printf("\n Введите число: "); scanf("%i", &n); 
            if (n > 1)
            {
                while (n > sum)
                {
                    k++;
                    sum += k;
                }
                printf("\n K = %d", k);
                printf("\n Сумма = %d", sum);
            }
            else
            {
                printf("\n Ошибка! Число должно быть больше нуля.");
            }
        break;
        case 4:
            printf("\n Введите процент вклада : "); scanf("%d", &x);
            if ((x > 0) && (x<25))
            {
                while (s <= 1100)
                {
                    k++;
                    s += s * x / 100;
                }
                printf("\n Kоличество месяцев : %d", k);
                printf("\n Итоговый размер вклада : %f", s);
            }
            else
            {
                printf("\n Ошибка! Процент должен быть больше нуля и меньше 25");
            }
        break;
        case 5:
            printf("\n Введите число A : "); scanf("%i", &z);
            printf("\n Введите число B : "); scanf("%i", &x);
            while (z != x) 
            {
                if (x > z) x = x - z;
                if (z > x) z = z - x;
            }
            printf("\n Наибольший общий делитель = %d ", z);
        break;
        case 6:
            printf("\n Введите число : "); scanf("%d", &n);
            if (n > 1)
            {
                while (f < n)
                {
                    kk++;
                    f = f2 + f1;
                    f2 = f1;
                    f1 = f;
                }
                printf("\n Порядковый номер числа Фибоначчи : %i", kk+1);
            }
            else
            {
                printf("\n Ошибка! Число должно быть больше 1.");
            }
        break;
        default:
        printf("\n Ошибка! Введите число от 1 до 6.");
    }
    return (0);
}