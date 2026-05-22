#include <stdio.h>

int main()
{
    int n;
    int digit;
    int sum = 0;
    int original;

    printf("Enter the number = ");
    scanf("%d", &n);

    original = n;

    if (n == 0)
    {
        printf("Sum of digits of 0 is 0\n");
        return 0;
    }

    else if (n < 0)
    {
        printf("Error ! Please enter postive value");
        return 0;
    }
    else
    {
        while (n > 0)
        {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
    }
    printf("The S.O.D of %d = %d\n", original, sum);
    return 0;
}