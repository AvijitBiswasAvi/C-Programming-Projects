#include <stdio.h>

int main()
{

    int n;
    long long product = 1;

    printf("Enter the number = ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error ! Please enter positive number");
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            product *= i;
        }

        printf("The factorial of %d is = %lld\n", n, product);
    }
    return 0;
}