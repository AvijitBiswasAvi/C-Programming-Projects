#include <stdio.h>

int main()
{

    int n;
    int range;

    printf("Enter the number = ");
    scanf("%d", &n);

    printf("Enter the range = ");
    scanf("%d", &range);

    if (n <= 0 || range <= 0)
    {
        printf("Please enter a positive number");
    }

    else
    {
        for (int i = 1; i <= range; i++)
        {
            printf("%d X %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}