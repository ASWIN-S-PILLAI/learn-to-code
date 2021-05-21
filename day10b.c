//Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((b*b-(4*a*c))>0)
        printf("Distinct Real : %0.2f , %0.2f", (-b + sqrt((b*b)-4*a*c))/(float)(2*a),(-b - sqrt((b*b)-4*a*c))/(float)(2*a));
    
    else if((b*b-(4*a*c))==0)
         printf("Equal Real: %0.2f , %0.2f ", -b/(float)(2*a) ,-b/(float)(2*a));
    
                else if( (b*b-(4*a*c))<0)
                { float d=-b/(float)(2*a);
                float e =(sqrt(-1*(b*b-(4*a*c)))/(2*a));
printf("Complex: %0.2f + i%0.2f , %0.2f - i%0.2f",d,e,d,e);}

            
    
/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
