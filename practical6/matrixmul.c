#include <stdio.h>

int main()
{
  int n=5,p=3, q=4;
  double A[n][p], B[p][q], C[n][q];
  int i, j, k;

  for(i=0; i<n; i++)
  { for(j=0; j<p; j++)
    {
       A[i][j] =  i+j;
    }
  }

  for(i=0; i<p; i++)
  { for(j=0; j<q; j++)
    {
       B[i][j] =  i-j;
    }
  }
  for(i=0; i<n; i++)
  { for(j=0; j<q; j++)
    {
       C[i][j] = 0.0;
    }
  }

  for(i=0; i<n; i++)
  { for(j=0; j<q; j++)
    {
      for(k=0; k<p; k++)
      {
             C[i][j] =  C[i][j] + A[i][k]*B[k][j];
      }
    }
  }

  printf("This is the matrix A\n");
    for(i=0; i<n; i++)
  { for(j=0; j<p; j++)
    {
       printf("%.3f ", A[i][j]);
    }
    printf("\n");
  }


  printf("This is the matrix B\n");
    for(i=0; i<p; i++)
  { for(j=0; j<q; j++)
    {
       printf("%.3f ", B[i][j]);
    }
    printf("\n");
  }
  printf("This is the matrix C\n");
    for(i=0; i<n; i++)
    { for(j=0; j<q; j++)
    {
       printf("%.3f ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}

