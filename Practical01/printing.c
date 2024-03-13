#include <stdio.h>

int main(void) {
   //declaring an integer
   int accountnum=1;
   //declaring a float
   float subtotal=1234.56, total=7890.12;
   
   // printing the int using %d and float using %f
   //%.2f is to round off the decimals to the 2nd place
   printf("Account: %d Subtotal: %.2f Total: %.2f\n",accountnum,
        subtotal,total);

  return 0;
}
