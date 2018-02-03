
#include <stdio.h>
#include <stdlib.h>


double dotproduct(int n, double x[], double y[]);
void matrix_times_vector(int m, int n, double A[], double x[], double y[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);
double drand48();
void fill_random(int m, int n, int p, double A[], double B[]);

void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[])
 {
     double temp[n],  tempC[m];
     double F[m*p];
     int row = 0, count = 0;

     
     for(int i = 0; i < p; i++)
     {
         for(int j= 0; j < n; j++)
         {
             temp[j] = B[i + (j * p)];
            
         }
         
        matrix_times_vector(m, n, A, temp, tempC);

        
        
       for (int k = 0; k < m; k++)
             
                {
                F[k+row] = tempC[k];
                 
                

                

                 }


        row += m;
        
     }
      
     

     

  
     for(int i = 0; i < m; i++)
     {
         for(int j = 0; j < p; j++)
         {
              C[count] = F[i + (j * m)];
              count++;
             
           
            


         }
     }


     }

