
#include <stdio.h>

int main(void) {
   int num1, num2, error;

   printf("Please input two positive integers\n");
   
   // statement to get input data from the user
   error = scanf("%d %d",&num1,&num2);
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }
   
   //if the numbers do not match the criteria
   if (num1<=0 || num2<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }
   
   printf(" You entered %d and %d\n",num1,num2);
   if (num1%2 == 0) {
      printf(" num1 is even and");
   } else {
      printf(" num1 is odd and");
   }
   
   // the "%" operator is used to find the remainder of the division of a and b
   if (num2%2 == 0) {
      printf(" num2 is even\n");
   } else {
      printf(" num2 is odd\n");
   }
   printf("\n");


  return 0;
}



