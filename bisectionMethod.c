#include <stdio.h>
#include <math.h>

// Define the function here
float f(float x)
{
    return x * x * x - x - 2; // Example: x^3 - x - 2 = 0
}

int main()
{
    float a, b, c;
    int i, n;

    // Input interval
    printf("Enter values of a and b: ");
    scanf("%f %f", &a, &b);

    // Check if bisection method is applicable
    if (f(a) * f(b) >= 0)
    {
        printf("Invalid interval. Try again.\n");
        return 0;
    }

    // Number of iterations
    printf("Enter number of iterations: ");
    scanf("%d", &n);

    // Bisection method loop
    for (i = 1; i <= n; i++)
    {
        c = (a + b) / 2;

        if (f(c) == 0.0)
        {
            break;
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    // // Input epsilon (tolerance)
    // printf("Enter epsilon (tolerance): ");
    // scanf("%f", &epsilon);

    // // Bisection method using while loop
    // while ((b - a) >= epsilon) {
    //     c = (a + b) / 2;

    //     if (f(c) == 0.0) {
    //         break;
    //     }
    //     else if (f(a) * f(c) < 0) {
    //         b = c;
    //     }
    //     else {
    //         a = c;
    //     }
    // }

    // Output result
    printf("Approximate root = %f\n", c);

    return 0;
}