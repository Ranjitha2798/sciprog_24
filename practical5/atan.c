#include <stdio.h>
#include <math.h>

// Function atanh1 using Maclaurin series
double atanh1(double x, double delta) {
    double sum = 0.0;
    int n = 0;
    double term = x;
    
    while (fabs(term) >= delta) {
        sum = sum + term;
        n++;
        term = pow(x, 2*n + 1) / (2*n + 1);
    }
    
    return sum;
}

// Function atanh2 using natural logarithms
double atanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

// Main function to compute atanh(x) for a range of x values
int main() {

    double delta;
    
    // Get input from the user
    printf("Enter a real positive number for delta: ");
    scanf("%lf", &delta);
    
    int length = 181;
    double x_values[length];
    double tanh1[length];
    double tanh2[length];
    
    // Initialize x values from -0.9 to 0.9 with step 0.01
    for (int i = 0; i < length; i++) {
        x_values[i] = -0.9 + 0.01 * i;
    }
    
    // Calculate atanh(x) using both methods
    for (int i = 0; i < length; i++) {
        tanh1[i] = atanh1(x_values[i], delta);
        tanh2[i] = atanh2(x_values[i]);
    }
    
    // Print the results for comparison
    printf("%6s | %18s | %18s | %12s\n", "x", "atanh1(x)", "atanh2(x)", "Difference");
    printf("---------------------------------------------------------------\n");
    
    for (int i = 0; i < length; i++) {
        double diff = fabs(tanh1[i] - tanh2[i]);
        printf("%6.2f | %18.10f | %18.10f | %12.10f\n", x_values[i], tanh1[i], tanh2[i], diff);
    }
    
    return 0;
}
