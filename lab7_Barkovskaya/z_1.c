// Дано значение угла α в градусах (0 < α < 360). Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.

#include <stdio.h>
#include <math.h>
 
int main (void)
{
    float a = -1;
    while ((a <= 0) || (a >= 360))
    {
        printf("\n Enter the angle value : ");
        scanf("%f", &a);
        if ((a <= 0) || (a >= 360)) printf("\n  This is an incorrect value");
    }
    a = (M_PI / 180) * a;
    printf("\n Angle value = %f radians", a);
    return(0);
}