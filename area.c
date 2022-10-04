#include<stdio.h>
#include<math.h>



int main(){

        int N =12,i;
        float a=0.0, b_deg = 60.0;
        float b_rad,area,mult_rad;

        // Convert b_deg=pi/3 to radians
        b_rad = (M_PI*b_deg)/180.0;
        // M_PI is a constant in C, it is equal to pi
        printf("pi/3 in radians is : %f\n",b_rad);

        //sum tangent(a) + tangent(b)
        area  = tan(a) + tan(b_rad);


        // area at point x1,x2,....xn use loops
        // we go from 5 to 60, interval size 5, because there are 12 intervals
        for (i=5;i<60;i=i+5){
                area = area+2*tan((M_PI*i)/180.0);
                }
        // Multiply partial area by (pi/3)/(2*12)
        // Convert it to radians first
        mult_rad = (M_PI*((b_deg)/(2*N)))/180.0;
        area = mult_rad*area;
        printf("The approximate area is %f : ",area);
        printf("The exact area is %f : ", log(2.0));

        return 0;
}

