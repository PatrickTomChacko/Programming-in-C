#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//finding e using Taylor series expansion

int factorial (int n);          //function prototype
int main(void){

  int i, order;
  double e=1, *terms;
  //Enter polynomial order
  printf("Please enter the required polynomial order\n");
  
if(scanf("%d",&order)!=1){	//error checking for scanf
  printf("Did not enter a number");
  return 1;
  }
  
  //Allocate space for terms array
  terms=malloc(order*sizeof(double));
  for(i=0;i<order;i++)
         {
	  terms[i] = 1.0/ (double) factorial(i +1);
 	  printf("\ne term for order %d is %1.14f",order,terms[i]);
	  e = e+terms[i];
         }
free(terms); 			//free up the space allocated to terms
//printf("%f",exp(1.0));
printf("\n e is estimated as %.10lf with difference %.10lf",e,fabs(e-exp(1.0)));
   
  return 0;
}

int factorial (int n) {
if (n<0){
  printf("Error n should be a positive number");
  return(-1);	 
  }
else if (n==0) return 1;
else return n*factorial(n-1) ;	//recursive function
 
}
