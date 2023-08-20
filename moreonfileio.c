//c program for more on file I/O in c
#include<stdio.h>
//#include<stdlib.h>
int main(){
 FILE *ptr = NULL;
 ptr = fopen("myfile.txt", "a+"); //w first clean an then write , r mode only read the file
 /*char c = fgetc(ptr);
 printf("the character i read was %c\n", c );
 c = fgetc(ptr);
 printf("the character i read was %c\n", c );*/

 /*char str[43];
 fgets(str, 3, ptr);
 printf("The string is %s\n", str);*/

 fputc('o', ptr);
 fputs("This is an apple", ptr);

 fclose(ptr);
 return 0;

}
