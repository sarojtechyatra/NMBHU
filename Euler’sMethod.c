#include <stdio.h>

// Define dy/dx = f(x, y)
float f(float x, float y)
{
    return x + y; // Example: dy/dx = x + y
}

int main()
{
    float x0, y0, xn, h, y;

    printf("Enter initial values x0 and y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter step size h: ");
    scanf("%f", &h);

    printf("Enter final value xn: ");
    scanf("%f", &xn);

    y = y0;

    // Euler's method loop
    while (x0 < xn)
    {
        y = y + h * f(x0, y);
        x0 = x0 + h;
    }

    printf("Value of y at x = %.2f is %.4f\n", x0, y);

    return 0;
}