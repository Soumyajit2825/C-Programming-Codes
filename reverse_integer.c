#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int rev(int n)
{
    int reverse=0;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}
int main()
{
    // reversing an integer in C Programming
    int reverse,n;

    printf("Enter a positive integer:\n");
    scanf("%d", &n);

    reverse=rev(n);

    printf("Before reverse = %d\n", n);//it's print the original number

    printf("After reverse = %d\n",reverse);//It's print the number after reversal

    return 0;
}