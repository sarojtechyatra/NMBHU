#include <stdio.h>

// Function to integrate
float f(float x)
{
    return x * x; // Example: f(x) = x^2
}

int main()
{
    float a, b, h, sum;
    int n, i;

    printf("Enter lower limit (a) and upper limit (b): ");
    scanf("%f %f", &a, &b);

    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i < n; i++)
    {
        sum = sum + 2 * f(a + i * h);
    }

    float result = (h / 2) * sum;

    printf("Value of integral = %f\n", result);

    return 0;
}

// Formula used
// ∫ a b f(x) dx≈  2 / h [f(x 0 ) +2∑ i = 1 to n−1 f(xi) + f(xn)]