#include <stdio.h>
/* Write a c program for printing star. For user input 0 print star pattern and for 1 print reverse star pattern.
*
**
***
for reverse star pattern syntax :
***
**
**
*/
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{

    int rows, type;
    printf("Enter 0 for star pattern and 1 for reverse star pattern.\n");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("How many rows do you want??\n");
        scanf("%d", &rows);
        starPattern(rows);
        break;

    case 1:
        printf("How many rows do you want??\n");
        scanf("%d", &rows);
        reversestarPattern(rows);
        break;

    default:
        printf("Your choice is invalid.Please re-check.");
        break;
    }
    return 0;
}