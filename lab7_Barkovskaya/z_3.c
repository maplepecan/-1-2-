// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    float X, A, Y, price;
    printf("\n Введите значение X : ");
    scanf("%f", &X);
    printf("\n Введите значение A : ");
    scanf("%f", &A);
    printf("\n Введите значение Y : ");
    scanf("%f", &Y);
    printf(" \n %f %f %f", X, A, Y);
    price = A / X;
    printf("\n Один кг стоит %f рублей", price);
    price = Y * price;
    printf("\n Y кг стоит %f рублей", price);

    return(0);
}