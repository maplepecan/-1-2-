// 1. С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала последней минуты.

#include <stdio.h>

int main ()
{
    int N;
    printf ("Enter N : ");
    scanf("%d", &N);
    N = N % 60;
    printf("\n N = %d", N);
}