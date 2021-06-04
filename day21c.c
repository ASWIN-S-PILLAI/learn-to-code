//Write a C program to find the number of prime numbers in a array of integers



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a[100],n,i,j,b=0,k=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            for(i=0;i<n;i++)
            { for(j=2;j<a[i];j++)
                 if(a[i]%j==0)
                    b++;
             {if(b==0)
             {  k++;
              b=0;}
              
             else
                 b=0;}}
            printf("%d",k);
                        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
