//Write a C program to find the factorial of a given number using a recursive function


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int n)
{  if(n==0)
        return 1;
else 
    
return n*fact(n-1);}

int main() {int b,c;
            scanf("%d",&b);
                if(b<0)
                    printf("ERROR");
            else
            { c=fact(b);
            printf("%d",c);}
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
