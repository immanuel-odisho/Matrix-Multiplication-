                                             
#include <stdio.h>
#include <stdlib.h>


double dotproduct(int n, double x[], double y[]);
void matrix_times_vector(int m, int n, double A[], double x[], double y[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);
double drand48();
void fill_random(int m, int n, int p, double A[], double B[]);


void fill_random(int m, int n, int p, double A[], double B[])
 {
     for(int i = 0; i < m*n; i++)
     {
         A[i] = drand48();
       
     }
     
          for(int i = 0; i < n*p; i++)
     {
         B[i] = drand48();
         
     }

 }         
