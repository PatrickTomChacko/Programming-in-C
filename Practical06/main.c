#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //Matrix Multiplication
    // dot product (multiply corresponding row and column and add the products.


    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];
    // These are static arrays, and their size cannot be changed
    // They are saved in the stacks, and hence don't take alot of memory
    // Dynamic arrays will be saved in the heaps

    int i,j,k; //loop indices, we need 3 for loops

    // Initialize Matrix A
    for (i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j] = i + j;
        }
    }

    // Initialize Matrix B
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j] = i - j;
        }
    }

    // Initialize Matrix C
    for (i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j] = 0.0;
        }
    }

    //Performing the multiplication
    // The time complexity here is n^3 (3 for loops)
    matmul(n,p,q,A,B,C);

    // Printing the Matrices
    printf("\nThis is Matrix A:\n");
    for (i=0;i<n;i++){
        for(j=0;j<p;j++){
            //%3.0f is for precision
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is Matrix B:\n");
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            //%3.0f is for precision
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is Matrix C:\n");
    for (i=0;i<n;i++){
        for(j=0;j<q;j++){
            //%3.0f is for precision
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
