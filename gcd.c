#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int m, n; /* given numbers */

    printf("Enter-two integer numbers: ");
    scanf("%d %d", &m, &n);
    while (n > 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    int LCM = (m * n) / m;

    printf("GCD = %d \n", m);
    printf("LCM = %d\n", LCM);
}