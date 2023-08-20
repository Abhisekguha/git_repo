#include <stdio.h>

int main() {
int m, n, p, q, i, j, k;
int matrix1[100][100], matrix2[100][100], result[100][100];

    // prompt the user to enter the dimensions of the matrices
printf("Enter the number of rows and columns of matrix 1: ");
scanf("%d %d", &m, &n);
printf("Enter the number of rows and columns of matrix 2: ");
scanf("%d %d", &p, &q);

    // check if the matrices can be multiplied
if(n != p) {
printf("Matrices cannot be multiplied\n");
return 0;
    }

    // prompt the user to enter the elements of matrix 1
printf("Enter the elements of matrix 1:\n");
for(i = 0; i< m; i++) {
for(j = 0; j < n; j++) {
printf("Element (%d,%d): ", i+1, j+1);
scanf("%d", &matrix1[i][j]);
        }
    }

    // prompt the user to enter the elements of matrix 2
printf("Enter the elements of matrix 2:\n");
for(i = 0; i< p; i++) {
for(j = 0; j < q; j++) {
printf("Element (%d,%d): ", i+1, j+1);
scanf("%d", &matrix2[i][j]);
        }
    }

    // multiply the matrices
for(i = 0; i< m; i++) {
for(j = 0; j < q; j++) {
result[i][j] = 0;
for(k = 0; k < n; k++) {
result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print the result matrix
printf("Result matrix is:\n");
for(i = 0; i< m; i++) {
for(j = 0; j < q; j++) {
printf("%d ", result[i][j]);
        }
printf("\n");
    }

return 0;
}
