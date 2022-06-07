#include <stdio.h>
#include <math.h>
// Armstrong number program using function in C programming
int arm(int number)
{
    int lastdigit;
    int power;
    int sum = 0;

    // temporary variable to store number
    int n = number;

    while (n != 0)
    {
        lastdigit = n % 10;
        power = lastdigit*lastdigit*lastdigit;
        sum = sum + power;
        n = n / 10;
    }
    if (sum == number)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int number;
    printf("Enter number:\n");
    scanf("%d", &number);

    if (arm(number) == 0)
    {
        printf("%d is an armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an armstrong number.Check it!!!!\n", number);
    }
    return 0;
}
