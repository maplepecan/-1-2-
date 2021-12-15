#include <stdio.h>

int main ()
{   
    int number, n, i1, rez;
    float cost, cost1, i, a, rezul, a2;
    printf("\n Enter the number : ");
    scanf("%d", &number);
    switch (number)
    {
        case 1:
            printf("\n Enter the cost of 1kg of candies : "); 
            scanf("%f", &cost);
            if (cost > 0)
            {
                for (float i = 0.1; i < 1.1; i += 0.1)
                {
                    float cost1 = cost * i;
                    printf("\n %f kg - %f rubles", i, cost1);
                }
            }
            else
            {
                printf("\n Error!");
            }
        break;
        case 2:
            printf("\n Enter N : "); 
            scanf("%d", &n);
            a = 1;
            if (n > 0)
            {
                for (i1 = 0; i1 <= n; i1++)
                {
                    i = i1;
                    a = (1.0 + i / 10) * a;;
                    printf("\n i = %f, i1 = %d, a = %f",i, i1, a);
                }
                printf("\n %f", a);
            }
            else
            { 
                printf("\n Error!");
            }
        break;
        case 3:
            printf("\n Enter N : ");
            scanf("%i", &n);
            if (n > 0)
            {
                for (i1 = 1; i1 <= (2 * n - 1); i1 += 2)
                {
                    rez += i1;
                    printf("\n %d", rez);
                }
            }
            else
            {
                printf("\n Error!");
            }
        break;
        case 4:
            printf("\n Enter A : "); scanf("%f", &a);
            printf("\n Enter N : "); scanf("%d", &n);
            a2 = 1;
            if (n > 0)
            {
                for (i1 = 1; i1 <= n; i1++)
                {
                    a2 *= a;
                    rezul += a2 ;
                }
            }
            else
            {
                printf("\n Error!");
            }
            printf("\n %f", rezul+1);
        break;
        case 5:
            printf("\n Enter A : "); scanf("%f", &a);
            printf("\n Enter N : "); scanf("%d", &n);
            a2 = 1;
            for (i1 = 0; i1 < n; i1++)
                {
                    rezul += (a2 = -a2 * a);
                }
            printf("\n %f", rezul+1);
        break;
    }
    return(0);
}