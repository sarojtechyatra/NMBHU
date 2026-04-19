#include <stdio.h>

int main()
{
    int i, j, k, n;
    float a[10][10], x[10], ratio;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter augmented matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    // Forward Elimination
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            ratio = a[j][i] / a[i][i];
            for (k = 0; k <= n; k++)
            {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    // Back Substitution
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];

    for (i = n - 2; i >= 0; i--)
    {
        x[i] = a[i][n];
        for (j = i + 1; j < n; j++)
        {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }

    // Output
    printf("Solution:\n");
    for (i = 0; i < n; i++)
    {
        printf("x%d = %f\n", i + 1, x[i]);
    }

    return 0;
}

// 1 Forward Elimination
// Convert matrix into upper triangular form
// Make elements below diagonal = 0


// 2 Back Substitution
// Find last variable first
// Substitute upward to find others