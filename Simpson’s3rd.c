#include <stdio.h>

// Define the function f(x)
// You can change this function as needed
float f(float x)
{
    return x * x; // Example: f(x) = x^2
}

int main()
{
    int n, i;
    float a, b, h, sum, result;

    // Input lower and upper limits
    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    // Input number of sub-intervals (must be even)
    printf("Enter number of intervals (n - must be even): ");
    scanf("%d", &n);

    // Check if n is even
    if (n % 2 != 0)
    {
        printf("Error! n must be even.\n");
        return 0;
    }

    // Calculate step size h
    h = (b - a) / n;

    // Initialize sum with first and last terms
    sum = f(a) + f(b);

    // Loop through intermediate points
    for (i = 1; i < n; i++)
    {

        // If index is even → multiply by 2
        if (i % 2 == 0)
        {
            sum = sum + 2 * f(a + i * h);
        }
        // If index is odd → multiply by 4
        else
        {
            sum = sum + 4 * f(a + i * h);
        }
    }

    // Apply Simpson’s 1/3 formula
    result = (h / 3) * sum;

    // Display result
    printf("Approximate value of integral = %f\n", result);

    return 0;
}

// Remember

// Simpson’s 1/3 rule and Simpson’s 3/8 rule are both numerical integration methods, 
// but they can be easily distinguished using a simple memory idea. The 1/3 rule is 
// used when the number of intervals is even and follows a weight pattern of 4 and 2, 
// making it more commonly used and generally more accurate. On the other hand, the 3/8
//  rule is used when the number of intervals is a multiple of 3 and follows a weight 
//  pattern of 3 and 2. A quick way to remember is: “1/3 rule → even intervals → 4 & 2 pattern,”
//   while “3/8 rule → multiple of 3 intervals → 3 & 2 pattern.” The 1/3 rule is usually preferred 
//   for better accuracy, while the 3/8 rule is applied when the 1/3 condition is not satisfied.