//Write a C program to check whether a given number is amstrong or not.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void amstrong(int a)
{int s=0,r,n=a;
while(n>0)
{ r=n%10;
s+=r*r*r;
 n=n/10;}
 if(s==a)
     printf("Amstrong");
 else
     printf("Not Amstrong");
}





int main() {int b;
            scanf("%d",&b);
            amstrong(b);
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
