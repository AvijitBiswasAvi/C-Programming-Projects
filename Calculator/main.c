#include <stdio.h>

int main()
{

    float a, b;
    int choice;
    int i, j;

    printf("====YOUR OPTIONS====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("====================\n");

    printf("Enter the 1st number = ");
    scanf("%f", &a);

    printf("Enter the 2nd number = ");
    scanf("%f", &b);

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result = %.2f\n", a + b);
        break;
    case 2:
        printf("Result = %.2f\n", a - b);
        break;
    case 3:
        printf("Result = %.2f\n", a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("Error ! Action can't be performed");
        }
        else
        {
            printf("Result = %.2f\n", a / b);
        }
        break;
    case 5:
        if (b == 0)
        {
            printf("Error ! Action can't be performed");
        }
        else
            i = (int)a;
        j = (int)b;
        printf("Result = %d\n", i % j);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}