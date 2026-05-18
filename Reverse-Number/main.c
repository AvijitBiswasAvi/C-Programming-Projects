#include <stdio.h>

int main()
{

    int n, digit;
    int reverse = 0;
    int original;

    printf("Enter the number = ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    printf("The Reversed of %d is = %d\n", original, reverse);
    return 0;
}