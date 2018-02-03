#include <stdio.h>
#include <stdlib.h>


double dotproduct(int n, double x[], double y[]);
void matrix_times_vector(int m, int n, double A[], double x[], double y[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);
double drand48();
void fill_random(int m, int n, int p, double A[], double B[]);



int main()
{

    //Enter m, n, p
    int m, n, p;
    printf("Enter m, n, p: ");
    scanf("%d%d%d", &m, &n, &p);
    
    double A[m*n], B[n*p], C[m*p];
    //Fill A and B with random numbers
    fill_random(m, n, p, A, B);
    
    //Compute C = A*B
    matrix_times_matrix(m, n, p, A, B, C);
    return 0;

    
}
