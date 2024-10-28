#include <stdio.h>

void fib(int *x, int *y);


void fib(int *x, int *y) {
    // To calculate the next Fibonacci number
    int temp = *x + *y; // Calculate the next number
    *y = *x;            // Assign current number y to previous number x
    *x = temp;          // Assign next number to current number y
}

int main() {
    int n, i;
    
    // Initialize the first two Fibonacci numbers
    int f0 = 0, f1 = 1;
    
    //user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //Handle exception for n<0
    if(n<0)
    {
       printf("Enter the number greater than 0");
       return 1;
    }
    else if(n==0){
       printf("Fibonacci series till %d:\n", n);
       printf("%d ",f0);
    }
    else{
          // Print the Fibonacci series
           printf("Fibonacci series till %d:\n", n);
           printf("%d %d ", f0, f1);
           for (i = 2; i <= n; i++) {
                fib(&f1, &f0);
                printf("%d ", f1);
           }
        }
        

    printf("\n");
    return 0;
}
