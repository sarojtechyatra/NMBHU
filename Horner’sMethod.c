#include <stdio.h>

int main() {
    int n, i;
    float a[10], x, result;

    printf("Enter degree of polynomial: ");
    scanf("%d", &n);

    printf("Enter coefficients:\n");
    for (i = 0; i <= n; i++) {
        scanf("%f", &a[i]);   // a[0] = highest power
    }

    printf("Enter value of x: ");
    scanf("%f", &x);

    // Horner's Rule
    result = a[0];
    for (i = 1; i <= n; i++) {
        result = result * x + a[i];
    }

    printf("Value of polynomial = %f\n", result);

    return 0;
}



// example
// For polynomial 2x^3 + 3x^2 + 4x + 5 at x = 2
// degree = 3
// coefficients = 2, 3, 4, 5

// Horner's method steps:
// result = 2
// result = 2 * 2 + 3 = 7
// result = 7 * 2 + 4 = 18
// result = 18 * 2 + 5 = 41
