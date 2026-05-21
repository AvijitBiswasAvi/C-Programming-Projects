#include <stdio.h>

int main()
{

    int n;
    int digit;
    int rev = 0;
    int original;

    printf("Enter the number = ");
    scanf("%d", &n);

    original = n;

    if (n <= 0)
    {
        printf("==Please enter positive value==");
        return 0;
    }
    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (original == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}