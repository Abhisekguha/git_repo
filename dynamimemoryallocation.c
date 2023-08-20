#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int *ptr;
    int n;
    //use of malloc
    /*printf("Enter the size of array you want to create \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no. %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array %d \n", i, ptr[i]);
    }*/


    //use of calloc

    printf("Enter the size of array you want to create \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no. %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }  //if i comment out thispart of program then it initialize all the memory by 0

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array %d \n", i, ptr[i]);
    }

    //use of realloc
    printf("Enter the size of new array you want to create \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no. %d of this array \n", i);
        scanf("%d", &ptr[i]);
    } 
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array %d \n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}