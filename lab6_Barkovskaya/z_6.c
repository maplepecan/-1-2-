// Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения.

#include <stdio.h>


int main(void)
{
    int A, A1;
    printf("\n Введите значение A : ");
    scanf("%d", &A);
    A1 = A * A;
    A = A1 * A1;
    A1 = A * A;
    printf("\n A = %d", A1);
    return(0);
}