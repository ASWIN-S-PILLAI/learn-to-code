//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a[100][100],j,i,n,m;
            scanf("%d",&n);
            scanf("%d",&m);
            for(i=0;i<n;i++)
                for (j=0;j<m;j++)
                    scanf("%d",&a[i][j]);
            
            
            if(n!=m)
                printf("ERROR");
            else
            
            {{ for(i=0;i<n;i++)
            
                
                
            for (j=0;j<m;j++)
             if(i==j)
                    printf("%d ",a[i][j]);
            printf("\n");}
             j=m-1;
             for(i=0;i<n;i++)
                 for(j;j>=0;j--)
                 { printf("%d ",a[i][j]);
                     j=j-1;
             break;}}
            
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

