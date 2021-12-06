// Дано значение угла α в радианах (0 < α < 2·π). Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    float a = -1;
    while ((a < 0) || (a > 2 * M_PI))
    {
        printf("\n Enter the angle value (radians) : ");
        scanf("%f", &a);
        if ((a < 0) || (a > 2 * M_PI)) printf("\n This is an incorrect value");
    }
    a = (180 / M_PI) * a;
    printf("\n Angle value = %f", a);
    return(0);
}