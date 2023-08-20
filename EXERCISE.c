#include <stdio.h>

int main() {

    int x[2][3][4]={
        {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
        },
        {
            {12,13,14,15},
            {16,17,18,19},
            {20,21,22,23}
        }
    };

    int i, j, k;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 4; k++) {
                printf("Element at [%d][%d][%d]: %d\n", i, j, k, x[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}AkanshaDas@