#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) return 1.0;
    int fact = 1.0;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
  
    int order,i;
    double e = 1.0,*terms;

    printf("Enter the order of the polynomial: ");
    scanf("%d", &order);

    if (order <= 1) {
        printf("Please enter a valid order between 1 and 15.\n");
        return 1;
    }
      
    terms = (double *)malloc(order * sizeof(double));
    for ( i = 0; i < order; i++) {
        terms[i] = 1.0 / (double)factorial(i+1);
        printf("%.16lf\n", terms[i]);
    }

    for (i =0; i < order; i++){
        e = e + terms[i];
    }
    free(terms);
    printf("e true value is %.10lf, with difference %e\n", e , e - exp(1.0));
    return 0;
}
