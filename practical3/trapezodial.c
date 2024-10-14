#include <stdio.h>
#include <math.h>

int main(void)
{
    int N = 12;
    float a = 0;
    float b = 60;

    float b_rad;
    b_rad = (M_PI * b) / 180;
    
    float sum = tan(a) + tan(b_rad);
    printf("The value of sum before the loop is: %f\n", sum);

    int i ;
    for ( i = 5; i < 60 ; i = i + 5)
    {
         sum += 2 * tan( i * M_PI / 180); // sum = sum + 2 tan(i*PI/180)
    }
    printf("The value of the sum after the loop is :%f\n",sum);
    
    sum = ((b_rad - a) / (2 * N)) * sum;
    printf("The final value of the sum is: %f\n", sum);
    printf("The actual value of the sum is: %f\n", log(2));

    float abs_diff = fabs(sum - log(2));
    float rel_diff = fabs(1 - (sum/log(2)));
    printf("The absoute difference %f\n", abs_diff );
    printf("The relational difference %f\n", rel_diff);

    return 0;

}
