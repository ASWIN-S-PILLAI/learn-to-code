//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a,b,c,d;
    scanf("%d \n %d \n %d %d",&a,&b,&c,&d);
    printf("%d\n%0.1f\n%0.2f",a*a,3.14*b*b,0.5*c*d);
        return 0;
}
