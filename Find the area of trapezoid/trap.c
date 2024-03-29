#include<stdio.h>
#include<math.h>
// Program to calculate the area under a curve by Trapezodial rule, Prac 3

int main(void){
int i, N=12;                          //N,a,b is given in question
float a = 0.0, b_deg = 60.0,b,area;

                                      //Convert the degree to radian as function tan takes radian as input
b  = (b_deg*M_PI)/180.0;
printf("Value of b in radians is %f\n",b); 
                                      //initialise the value of area for x0 and x12 the points
area = tan(a) + tan(b);


for(i= 5;i<60;i=i+5){                   //from 0 to 60 degree with bin size 5deg since N=12
area = area + 2 * tan((i*M_PI)/180.0);
}


area = ((b-a)/(2*N))*area;		      //Formula


printf("The area we got from the approximation is %f wheras exact area is %f\n",area,log(2.0));
return 0;
}
