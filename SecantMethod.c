#include <stdio.h>
#include <math.h>

// Function
float f(float x)
{
    return x * x * x - x - 2;
}

int main()
{
    float x0, x1, x2, e;

    printf("Enter x0 and x1: ");
    scanf("%f %f", &x0, &x1);

    printf("Enter epsilon: ");
    scanf("%f", &e);

    while (fabs(x1 - x0) > e)
    {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));   // Secant method formula
        x0 = x1;
        x1 = x2;
    }

    printf("Root = %f", x2);

    return 0;
}