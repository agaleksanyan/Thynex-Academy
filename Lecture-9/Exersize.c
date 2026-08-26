#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;
    double dx;
    double dy;
    double result;
    char ch;
    char sym;

    printf("Ex.1\n");
    printf("Write the number: ");

    if (scanf("%d", &x) == 1)
        printf("Your number is '%d'\n", x);
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.2\n");
    printf("Write the double number: ");

    if (scanf("%lf", &dx) == 1)
        printf("Your number is '%f'\n", dx);
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.3\n");
    printf("Write the symbol: ");

    if (scanf(" %c", &ch) == 1)
        printf("Your symbol is '%c'\n", ch);
    else
        printf("Cannot read symbol!\n");

    printf("\n");

    printf("Ex.4\n");
    printf("Write the number: ");

    if (scanf("%d", &x) == 1)
    {
        result = 4.0 * x + 21.0 * x * x - 12.0;
        printf("Result for (4*x + 21*x*x - 12) is %.2f\n", result);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.5\n");
    printf("Write the number: ");

    if (scanf("%d", &x) == 1)
    {
        result = x / 7.0 + 30.0 * x - 51.0;
        printf("Result for (x / (5 + 2) + 30*x - 51) is %.2f\n",
            result);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.6\n");
    printf("Write two numbers, example (10 100): ");

    if (scanf("%d %d", &x, &y) == 2)
    {
        if (y == 0)
            printf("Cannot divide by zero!\n");
        else
        {
            result = x * y + 21.0 * x / y - 200.0;
            printf("Result for (x*y + 21*x/y - 200) is %.2f\n",
                result);
        }
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.7\n");
    printf("Write your weight and height, example (75 1.80): ");

    if (scanf("%lf %lf", &dx, &dy) == 2)
    {
        if (dx <= 0)
            printf("Weight must be greater than zero!\n");
        else if (dy <= 0)
            printf("Height must be greater than zero!\n");
        else
        {
            result = dx / (dy * dy);
            printf("Your BMI is %.2f\n", result);
        }
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.8\n");
    printf("Write 3 numbers, example (10 20 30): ");

    if (scanf("%d %d %d", &x, &y, &z) == 3)
    {
        result = (x + y + z) / 3.0;
        printf("Average is %.2f\n", result);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.9\n");
    printf("Write the hours: ");

    if (scanf("%d", &x) == 1)
        printf("%d hours = %d minutes\n", x, x * 60);
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.10\n");
    printf("Write your age: ");

    if (scanf("%d", &x) == 1)
        printf("You have lived approximately %d days\n", x * 365);
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.11\n");
    printf("Write the number: ");

    if (scanf("%d", &x) == 1)
        printf("Square = %d\n", x * x);
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.12\n");
    printf("Write two numbers: ");

    if (scanf("%d %d", &x, &y) == 2)
    {
        printf("Plus = %d\n", x + y);
        printf("Minus = %d\n", x - y);
        printf("Multiplied = %d\n", x * y);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.13\n");
    printf("Write your yearly income: ");

    if (scanf("%d", &x) == 1)
    {
        printf("Your income per month is '%d'\n", x / 12);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.14\n");
    printf("Write your age: ");

    if (scanf("%d", &x) == 1)
    {
        printf("Your age is '%d' years or '%d' months\n",
            x, x * 12);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.15\n");
    printf("Write temperature in Celsius: ");

    if (scanf("%d", &x) == 1)
    {
        printf("In Celsius = '%d'\n", x);
        printf("In Fahrenheit = '%d'\n", x * 9 / 5 + 32);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.16\n");
    printf("Write the height and width: ");

    if (scanf("%d %d", &x, &y) == 2)
    {
        printf("Area = '%d'\n", x * y);
        printf("Perimeter = '%d'\n", 2 * (x + y));
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }

    printf("\n");

    printf("Ex.17\n");
    printf("Write your age: ");

    if (scanf("%d", &x) == 1)
    {
        printf("This is approximately '%lld' seconds\n",
            (long long)x * 31536000LL);
    }
    else
    {
        printf("This is not a number!\n");
        while (getchar() != '\n')
            ;
    }


    printf("\n");

    printf("Ex.18\n");
    printf("Write the 'A - Z': ");

    if (scanf(" %c", &sym) == 1)
    {
        if (sym >= 'A' && sym <= 'Z')
            printf("%c\n", sym + 32);
        else
            printf("This is not A - Z!\n");
    }
    else
    {
        printf("Cannot read symbol!\n");
    }

    return 0;
}