#include <stdio.h>

int main()
{

    printf("==== OPTIONS ====\n");
    printf("1. Even number\n");
    printf("2. Odd number\n");
    printf("=================\n");

    int choice, n, i;

    printf("Enter your choice = ");
    scanf("%d", &choice);

    printf("Enter the max number you want to print to = ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("== Error !! Enter positive number ==");
        return 0;
    }

    switch (choice)
    {
    case 1:

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
        break;

    case 2:

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d\n", i);
            }
        }
        break;

    default:
        printf("=== INVALID CHOICE ===");
        break;
    }
    return 0;
}