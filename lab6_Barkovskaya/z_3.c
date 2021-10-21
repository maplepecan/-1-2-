// Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.

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
    int C = vv('C');
    int buf;
    buf = A;
    A = B;
    B = C;
    C = buf;
    printf("\n A = %d, B = %d, C = %d", A, B, C);
    return(0);
}
