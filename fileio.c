//c program for file I/O
#include<stdio.h>
//#include<stdlib.h>
int main(){
    FILE *ptr=NULL;
    char string[64]= "This content was produced by fileio.c";

    //********Reading a file********
    //ptr = fopen("myfile.txt", "r");
    //fscanf(ptr, "%s", string);
    //printf("The content in the file has %s\n", string);

    //*******Wrinting a file********
    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);
    


    return 0;
}