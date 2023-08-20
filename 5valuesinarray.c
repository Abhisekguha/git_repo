#include<stdio.h>
int main(){
    int values[5]; //declare an integer array of size 5
    int i;

    printf("enter 5 values:\n ");

    //loop to read values from user input and store them in th array
    for(i=0; i<5; i++){
        printf("Value %d:", i+1);
        scanf("%d", &values[i]);
    }

    //print the values stored in the array
    printf("Values stored in the array are:\n");
    for(i=0; i<5; i++){
        printf("%d\n", values[i]);
    }

    return 0;
}