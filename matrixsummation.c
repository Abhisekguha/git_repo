#include <stdio.h>

int main() {
int m, n, i, j;
int matrix1[100][100], matrix2[100][100], sum[100][100];

    // prompt the user to enter the dimensions of the matrices
printf("Enter the number of rows and columns of the matrices: ");
scanf("%d %d", &m, &n);

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
for(i = 0; i< m; i++) {
for(j = 0; j < n; j++) {
printf("Element (%d,%d): ", i+1, j+1);
scanf("%d", &matrix2[i][j]);
        }
    }

    // add the matrices
for(i = 0; i< m; i++) {
for(j = 0; j < n; j++) {
sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // print the sum matrix
printf("Sum of the matrices is:\n");
for(i = 0; i< m; i++) {
for(j = 0; j < n; j++) {
printf("%d ", sum[i][j]);
        }
printf("\n");
    }

return 0;
}
