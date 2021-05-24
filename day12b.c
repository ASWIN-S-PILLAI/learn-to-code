//Write a C program to find the frequency of odd and even numbers in the 1D array.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,i,a=0,b=0,c[100];
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",&c[i]);
            
            for(i=0;i<n;i++)
                if(c[i]%2==0)
                    a++;
            else if(c[i]!=0)
                b++;
            
            
            printf("%d\n%d",a,b);
            

  
    return 0;
}
