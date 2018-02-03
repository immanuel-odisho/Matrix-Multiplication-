#include <stdio.h>
#include <stdlib.h>


double dotproduct(int n, double x[], double y[]);
void matrix_times_vector(int m, int n, double A[], double x[], double y[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);
double drand48();
void fill_random(int m, int n, int p, double A[], double B[]);



double dotproduct(int n, double x[], double y[])
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += x[i] * y[i];
    }
    return sum;
} 
