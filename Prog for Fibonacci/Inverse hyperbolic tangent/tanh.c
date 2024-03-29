#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Program to find the Inverse hyperbolic function using Maclaurin series and natural log
double maclaurin(const double x, const double delta);
double log_sum(const double x);
int main(void)
{
  int length,ierr,i;
  double delta,x;
  length =1000;						  
  double sum_mc[length],sum_log[length];                    //To store the sums for comparison
  printf("Enter the precision for Mac Laurian series\n");   //We need a stopping point, hence delta
  ierr = scanf("%lf",&delta);
  if(ierr!=1||delta<0)                                      //Check return type of scanf
    {
     printf("A positive numeric value for delta is expected, Try again\n");
     exit(1);
    } 
   x = -0.9;
   i = 0;                                                //Given in question
   while(x<=0.9&&i<length)
      {
      sum_mc[i] = maclaurin(x,delta);
      sum_log[i] = log_sum(x);
      printf("The difference for x = %lf in their sum approximation is %.10lf\n",x,fabs(sum_mc[i]-sum_log[i]));
      x = x+0.01;
      i = i+1;
      }
  return 0;
}
double maclaurin(const double x,const double delta)       //Function to calculate via maclauin sum
{ 
   int p=0;
   double val,elem;
   double mc_sum =0;
   do { 
	val = 2*p +1;
        elem = pow(x,val)/val;
        mc_sum = mc_sum+ elem;
      	p = p+1; 
      } while(fabs(elem)>=delta);
   return mc_sum;  
}	
double log_sum(const double x)				//Function to calculate sum via log
{
 return (log(1+x)-log(1-x))/2;
}
