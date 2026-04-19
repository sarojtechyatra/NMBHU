#include <stdio.h>
#include <math.h>

// function
float f(float x)
{
    return x * x * x - x - 2;
}

// derivative
float df(float x)
{
    return 3 * x * x - 1;
}

int main()
{
    float x0, x1, epsilon;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);
    // Newton-Raphson loop
    while (1)
    {
        if (df(x0) == 0)
        {
            printf("Derivative is zero. Method fails.\n");
            return 0;
        }
        x1 = x0 - f(x0) / df(x0);
        if (fabs(x1 - x0) < epsilon)
        {
            break;
        }
        x0 = x1;
    }
    printf("Approximate root = %f\n", x1);
    return 0;
}