


#include <stdio.h>
#include <math.h>

#define N 12  // N = 0, 5, 10, ..., 60 (13 points)
float tan_array[N+1];  // Array to store tan(x)

// Functions
float deg_to_rad(float deg);
float trapezoidal_area(float a_deg, float b_deg, int Numb);

int main() {
    // Loop to calculate tan(x) for degrees from 0 to 60 (every 5 degrees)
    for (int i = 0; i < N; i++) {
        float deg = i * 5;  // Degrees: 0, 5, 10, ..., 60
        float rad = deg_to_rad(deg);  // Convert to radians
        tan_array[i] = tan(rad);  // Store tan(x) in the array
        printf("tan(%d degrees) = %f\n", (int)deg, tan_array[i]);  // Print the result
    }

    // Call the trapezoidal function to compute the area under tan(x)
    float area = trapezoidal_area(0, 60, N);  // From 0 to 60 degrees
    printf("The area under the curve(tan(x)) from 0 to 60 degrees is: %f\n", area);
    printf("The real result is %f\n", log(2));
    return 0;
}

// Function to convert degrees to radians
float deg_to_rad(float deg) {
    return (deg * M_PI) / 180.0;
}

// Function to calculate the area using the trapezoidal rule
float trapezoidal_area(float a_deg, float b_deg, int n_value) {
    // Convert a and b to radians
    float a_rad = deg_to_rad(a_deg);
    float b_rad = deg_to_rad(b_deg);

    // Step size (in radians)
    float h = (b_rad - a_rad) / (n_value - 1);

    // Apply the trapezoidal rule
    float area = 0.5 * (tan(a_rad) + tan(b_rad));  // First and last terms
    for (int i = 1; i < n_value - 1; i++) {
        float x_rad = deg_to_rad(i * 5);  // Calculate the radian value for each 5-degree step
        area += tan(x_rad);  // Sum the inner terms
    }
    
    area = area * h;  // Multiply by the step size
    return area;
}

