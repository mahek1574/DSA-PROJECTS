#include <stdio.h>
using namespace std;

int addition(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

float division(int x, int y)
{
    return (float)x / y;
}

int modulus(int x, int y)
{
    return x % y;
}

int main()
{
    int choice, num1, num2;

    while (1)
    {

        printf("\n calculator");
        printf("\n1 addition");
        printf("\n2 subtraction");
        printf("\n3 multiplication");
        printf("\n4 division");
        printf("\n5 modulus");
        printf("\n0 exit");

        printf("\n\n enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("\ncalculator close");
            break;
        }

        printf("enter first number: ");
        scanf("%d", &num1);

        printf("enter second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("Result = %d", addition(num1, num2));
            break;

        case 2:
            printf("Result = %d", subtraction(num1, num2));
            break;

        case 3:
            printf("Result = %d", multiplication(num1, num2));
            break;

        case 4:
            if (num2 == 0)
            {
                printf("not possible");
            }
            else
            {
                printf("Result = %.2f", division(num1, num2));
            }
            break;

        case 5:
            if (num2 == 0)
            {
                printf("not possible");
            }
            else
            {
                printf("result = %d", modulus(num1, num2));
            }
            break;

        default:
            printf("invalid choice");
        }
    }

    return 0;
}