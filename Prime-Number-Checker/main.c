#include <stdio.h>

int main()
{

    int n;
    int prime = 1;

    printf("Enter the number = ");
    scanf("%d", &n);

    if (n <= 1)
    {
        prime = 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not prime number");
    }

    return 0;
}