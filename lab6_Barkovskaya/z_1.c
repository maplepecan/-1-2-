// 1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.

#include <stdio.h>

int vv (char a)
{
    printf("\n Введите значение %c : ", a);
    scanf("%d", &a);
    return (a);
}

int main(void)
{
    int A = vv('A');
    int B = vv('B');
    int buf;
    buf = A;
    A = B;
    B = buf;
    printf("\n A = %d, B = %d", A, B);
    return(0);
}
