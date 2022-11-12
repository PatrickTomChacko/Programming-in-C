#include<stdio.h>
//Learning to use the printf command to print output to the screen
//Learning different format specifiers used
int main(void){

int i=-98,j=35;           //Declaring variables of different datatypes
float f=83.9894,g=34.1234; 

printf("There are two integer types and their values are %d, and %d .\n",i,j);
printf("For float items we can control the number of digits after decimal using our format specifiers.");
printf(" For example if we want three digits I can write %.3f and for 1 digit I write %.1f\n",f,g);

return 0;
}

