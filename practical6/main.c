#include <stdio.h>
//define the function to calulate matrix multiplication C = AxB
void matmul( int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main()
{
  //Intialize and declare n, p, q (size of matrices)
  int n=5,p=3, q=4;
  //Declare matrix A,B,C
  double A[n][p], B[p][q], C[n][q];
  int i, j, k; //loop indices

  //Calulate matrix A = i+j
  for(i=0; i<n; i++)
  { for(j=0; j<p; j++)
    {
       A[i][j] =  i+j;
    }
  }
  
  //Calculate matrix B = i-j
  for(i=0; i<p; i++)
  { for(j=0; j<q; j++)
    {
       B[i][j] =  i-j;
    }
  }

  //Initialize matrix C
  for(i=0; i<n; i++)
  { for(j=0; j<q; j++)
    {
       C[i][j] = 0.0;
    }
  }

  //Call matmul() function
  matmul(n, p , q, A, B, C);

  //Print matrix A
  printf("\n");
  printf("This is the matrix A\n");
  printf("\n");
    for(i=0; i<n; i++)
  { for(j=0; j<p; j++)
    {
       printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }

  //Print matrix B
  printf("\n");
  printf("This is the matrix B\n");
  printf("\n");
    for(i=0; i<p; i++)
  { for(j=0; j<q; j++)
    {
       printf("%.2f ", B[i][j]);
    }
    printf("\n");
  }

  //Print matrix C
  printf("\n");
  printf("This is the matrix C\n");
  printf("\n");
    for(i=0; i<n; i++)
    { for(j=0; j<q; j++)
    {
       printf("%.2f ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}

