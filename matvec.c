#include <stdio.h>
#include <stdlib.h>


double dotproduct(int n, double x[], double y[]);
void matrix_times_vector(int m, int n, double A[], double x[], double y[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);
double drand48();
void fill_random(int m, int n, int p, double A[], double B[]);



void matrix_times_vector(int m, int n, double A[], double x[], double y[])
{
    double entry;
    double a[n];
    int z = 0, i, j,w = 0;
    double temp1[m];

    
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            
            a[j] = A[z];
           
            z++;
            if (j == n - 1)
            {
                entry = dotproduct(n,a,x);
              
                temp1[w] = entry;
                w++;

            }

        }
    }

        for (i = 0; i < m; i++)
            {
                y[i] = temp1[i];
                
                
            }
 

}

