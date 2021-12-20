#include <stdio.h>
#include <stdlib.h>


float PowerA3(float a, float b)
{
    b = a*a*a;
    return(b);
}

int Sign(float x)
{
    int i;
    if (x < 0) i = -1;
    else if (x == 0) i = 0;
    else i = 1;
    return(i);
}

void RingS(float r1, float r2)
{
    r1 = 3.14 * r1 * r1;
    r2 = 3.14 * r2 * r2;
    float r3 = r1 - r2;
    printf("\n Площадь кольца равна %f ", r3);
}

int Quarter (float x, float y)
{
    int z;
    if ((x > 0) && (y > 0)) z = 1;
    if ((x < 0) && (y > 0)) z = 2;
    if ((x < 0) && (y < 0)) z = 3;
    if ((x > 0) && (y < 0)) z = 4;
    return (z);
}

float Fact2(int n)
{   
    int i;
    float z = 1;
    if (n % 2 == 0)
    { 
        i = 2;
        while (i <= n) 
    {
        z = z * i;
        i = i + 2;
    } 
    }
    if (n % 2 != 0)
    { 
        i = 1;
        while (i <= n) 
    {
        z = z * i;
        i = i + 2;
    } 
    }
    return(z);
}

int main ()
{
    system("chcp 65001");
    system("cls");

    int number,i,j,x,y,z,n;
    float a,b,r1,r2,x1,y1;

    printf("\n Введите номер задания : ");
    scanf("%d", &number);
    switch (number)
    {
        case 1:
        for (i = 0; i < 5; i++)  
            {
            printf("\n Введите значение А : ");
            scanf("%f", &a); 
            b = PowerA3(a, 0);
            printf("\n B = %f", b);
            }
        break;
        case 2:
            printf("\n Введите значение A : ");
            scanf("%f", &a);
            printf("\n Введите значение B : ");
            scanf("%f", &b);
            x = Sign(a);
            y = Sign(b);  
            x = x + y;
            printf("\n %i", x);
        break;
        case 3:
            for (i = 0; i < 5; i++)
            {
                r1 = 0;
                r2 = 0;
                while ((r1 <= 0) || (r2 <= 0) || (r1 <= r2))
                {
                printf("\n Введите радиус R1 : ");
                scanf("%f", &r1);
                printf("\n Введите радиус R2 : ");
                scanf("%f", &r2);
                if ((r1 <= 0) || (r2 <= 0) || (r1 <= r2)) printf("\n R1 должен быть больше 0, R2 должен быть больше 0, R1 > R2!");
                }
                RingS(r1,r2);
            }
        break;
        case 4:
            for (i = 0; i < 5; i++)
            {
                x1 = 0;
                y1 = 0;
                while ((x1 == 0) || (y1 == 0))
                {
                printf("\n Ввведите координату x : ");
                scanf("%f", &x1);
                printf("\n Введите координату y : ");
                scanf("%f", &y1);
                if ((x1 == 0) || (y1 == 0)) printf ("\n Координаты не должны быть нулевыми!");
                }
                j = Quarter(x1,y1);
                printf("\n %d четверть", j);
            }

        break;
        case 5:
            printf("\n Введите N : ");
            scanf("%d", &n);
            a = Fact2(n);
            printf("\n Двойной факториал равен %f", a);
        break;
        default:
        printf("\n Ошибка! Введите число от 1 до 5.");
    }
    return (0);
}