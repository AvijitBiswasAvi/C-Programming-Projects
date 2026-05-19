#include <stdio.h>

int main()
{

    int n;

    printf("Enter the number = ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error ! Please enter positive value\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}