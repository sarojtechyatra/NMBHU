#include <stdio.h>
#include <math.h>

// Define g(x) such that x = g(x)
float g(float x)
{
    return cbrt(x + 2); // Example: x = (x + 2)^(1/3)
}

int main()
{
    float x0, x1, e;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter epsilon: ");
    scanf("%f", &e);

    while (1)
    {
        x1 = g(x0);

        if (fabs(x1 - x0) < e)
        {
            break;
        }

        x0 = x1;
    }

    printf("Root = %f\n", x1);

    return 0;
}