/* To compute GCD using iterative and recursive version 
of Euclidian algorithm of 2 positive integers      */

#include <stdio.h>

//define 2 functions
int iterative_gcd(int a, int b);
int recursive_gcd(int a, int b);

int main()
{
   int a, b, inputs;

   printf("Enter the 2 positive intergers:\n");
   inputs = scanf("%d %d", &a, &b);
   
   //Handling exceptions
   if(inputs != 2){
     printf("You have not enetered 2 positive integers\n");
     return 1;
   }
   if( a<=0 || b <= 0){
      printf("Please enter positive integers");
      return 1;
   }

   //print iterative gcd and recursive gcd output
   printf("Iterative GCD(%d,%d) is %d:\n", a, b, iterative_gcd(a,b));
   printf("Recursive GCD(%d,%d) is %d:\n", a, b, recursive_gcd(a,b));
   return 0;
}

//To compute iterative gcd
int iterative_gcd(int a, int b)
{
  int temp;
  while(b != 0)
  {
    temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

//To compute recursive gcd
int recursive_gcd(int a, int b)
{
    if(b==0)
    {
      return a;
    }
    else{
      return recursive_gcd(b, a%b);
    }
}
