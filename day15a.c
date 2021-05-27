//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int i,k,j,n,m,a[100][100],c=0;
            scanf("%d",&n);
            scanf("%d",&m);
             for(i=0;i<n;i++)
                 for(j=0;j<m;j++)
                     scanf("%d",&a[i][j]);
            scanf("%d",&k);
             for(i=0;i<n;i++)
                 for(j=0;j<m;j++)
                     if(a[i][j]==k)
                     { printf("Element found at (%d,%d)\n",i,j);
                      c++;}
            
            
            
            if(c==0)
                printf("Element not found");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
