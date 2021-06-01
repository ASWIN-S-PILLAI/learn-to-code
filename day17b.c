
//Write a C program to print inverted full pyramid of *


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int i,j,n;
            scanf("%d",&n);
            if(n<1)
                printf("ERROR");
            else
            { 
                
                for(i=1;i<=n;i++)
            
               
               {for(j=1;j<=2*n-1;j++)
                if(j>=i && j<=2*n-i)
                 printf("* ");
                else
                    printf("  ");
                
            
                
                
                printf("\n");
                
                
            }}
                
            

             /* Enter ]your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
