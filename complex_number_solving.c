#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/*
Write a C program to find the roots and to write the real and imaginary parts of ax^2+bx=c=0.
*/
int main()
{
    float a, b, c, d, r1, r2, rp, ip;
    printf("Enter the co-efficients of a,b and c: \n");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b - sqrt(d)) / (2 * a);
        r2 = (-b + sqrt(d)) / (2 * a);
        printf("Root 1 = %.2f and Root 2 = %.2f\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }
    else
    {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Root 1 = %.2f + %.2fi and Root 2 = %.2f - %.2fi\n", rp, ip, rp, ip);
    }
    return 0;
}