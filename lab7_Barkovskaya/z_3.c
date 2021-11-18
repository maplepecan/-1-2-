// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    float X, A, Y, price;
    printf("\n Enter X : ");
    scanf("%f", &X);
    printf("\n Enter A : ");
    scanf("%f", &A);
    printf("\n Enter Y : ");
    scanf("%f", &Y);
    printf(" \n %f %f %f", X, A, Y);
    price = A / X;
    printf("\n One kg costs %f rubles", price);
    price = Y * price;
    printf("\n Y kg costs %f rubles", price);

    return(0);
}