#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    system("chcp 65001");
    system("cls");

    int number, n = 0, i, j, j1, a1, d, d1;

    int a[100] = {};

    printf("\n Введите номер задания : ");
    scanf("%d", &number);
    switch (number)
    {
        case 1:
            while (n <= 0)
            {
                printf("\n Введите N : ");
                scanf("%d", &n);
                if (n <= 0) printf("\n Ошибка! N должен быть больше нуля! ");
            }
            a[0] = 1;
            
            printf("\n Массив : %d", a[0]);
            for (i = 1; i < n; i++)
            {
                a[i] = a[i-1] + 2;
                printf(" %d ", a[i]);
            }
        break;
        case 2:
            while (n <= 1)
            {
                printf("\n Введите N : ");
                scanf("%d", &n);
                if (n <= 1) printf("\n Ошибка! N должен быть больше единицы! ");
            }
            printf("\n Введите A : ");
            scanf("%d", &a1);
            printf("\n Введите D : ");
            scanf("%d", &d);
            a[0] = a1;
            printf("\n Массив : %d",a[0]);
            for (i = 1; i < n; i++)
            {
                a[i] = a1 * pow(d,i);
                printf(" %d ", a[i]);
            }
        break;
        case 3:
            while (n <= 2)
            {
                printf("\n Введите N : ");
                scanf("%d", &n);
                if (n <= 2) printf("\n Ошибка! N должен быть больше двух! ");
            }
            printf("\n Введите A : ");
            scanf("%d", &a1);
            printf("\n Введите B : ");
            scanf("%d", &d);
            a[0] = a1;
            a[1] = d;
            printf("\n Массив : %d %d",a[0], a[1]);
            for (i = 2; i < n; i++)
            {
                a[i] = a[i-1] + a[i-2];
                printf(" %d ", a[i]);
            }
        break;
        case 4:
            while (n < 1)
            {
                printf("\n Введите N : ");
                scanf("%d", &n);
                if (n < 1) printf("\n Вы серьезно хотите использовать нулевой или отрицательный массив? Подумайте еще раз над этим вопросом! ");
            }
            i = 0;
            j = 0;
            j1 = 0;

            for (i=0; i<n; ++i)
            {
                printf("Введите %i элемент массива : ", i);
                scanf("%i",&a[i]);
            }
            printf("\n Исходный массив : ");
            for (i = 0; i < n; i++) printf(" %d ", a[i]);
            printf("\n Итоговый массив :  %d ", a[0]);
            for (i = 1; i < n; i ++)
            {
                if (i % 2 != 0) 
                {
                    j++;
                    printf(" %d ", a[n-j]);
                }
                if (i % 2 == 0)
                {
                    j1++;
                    printf(" %d ", a[i-j1]);
                } 
            }
        break;
        case 5:
            while (n < 1)
            {
                printf("\n Введите N : ");
                scanf("%d", &n);
                if (n < 1) printf("\n Вы серьезно хотите использовать нулевой или отрицательный массив? Подумайте еще раз над этим вопросом! ");
            }
            i = 0;
            j = 0;
            j1 = 0;

            for (i=0; i<n; ++i)
            {
                printf("Введите %i элемент массива : ", i);
                scanf("%i",&a[i]);
            }
            printf("\n Исходный массив : ");
            for (i = 0; i < n; i++) printf(" %d ", a[i]);
            printf("\n Итоговый массив : ");
            for (i = 0; i < n; i++)
            {
                if (i % 2 != 0) printf(" %d ", a[i]);
            }
            for (i = n-1; i > 0; i--)
            {
                if (i % 2 == 0) printf(" %d ", a[i]);
            }
            printf(" %d ", a[0]);
        break;
        default:
        printf("\n Ошибка! Введите число от 1 до 5.");
    }
    return (0);
}