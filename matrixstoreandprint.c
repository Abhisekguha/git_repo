#include<stdio.h>
int main(){
    int rows, columns, i, j;
    int matrix[100][100]; //declaring a 2D array

    //prompt the user to enter the number of rows and colums
    printf("enter the number of rows and columns of the matix:");
    scanf("%d %d", &rows,&columns);

    //prompt the user to enter hte elements of the matrix 
    printf("enter the elements of the matrix:\n");

    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("Element (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // print the elements of the matrix
    printf("The matrix is:\n");

    for(i = 0; i< rows; i++) {
        for(j = 0; j < columns; j++) {
    printf("%d ", matrix[i][j]);
        }
    printf("\n");
    }

return 0;
}
