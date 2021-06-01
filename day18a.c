//Write a C program to swap the values of two variables.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 void swapab(int c,int d)
 {  int swap=c;
            c=d;
            d=swap;
  printf("\na=%d b=%d",c,d);
 }
int main() {int a,b;
            scanf("%d",&a);
            scanf("%d",&b);
            printf("a=%d b=%d",a,b);
            swapab(a,b);
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
