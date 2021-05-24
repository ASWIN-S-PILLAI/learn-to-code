//Write a C program to check whether a number present in the 1D array or not.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,a[100],b, c=0  ;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("\n%d",&a[i]);
    scanf("\n%d",&b);
    for(i=0;i<n;i++)
    if(a[i]==b)
        c++;
    
    {if(c>0)
     printf("%d is present in this array",b);
    else 
        printf("%d is not present in this array",b);
     }
    
    
    
    return 0;
}
