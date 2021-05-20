//C program to print the HCF of two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int i,a,b,c=1;
    scanf("%d %d",&a,&b);
   
    for(i=1;i<=a && i<=b;i++)
        c=(a%i==0 && b%i==0)? i:c;
    printf("%d",c);
    return 0;
}
