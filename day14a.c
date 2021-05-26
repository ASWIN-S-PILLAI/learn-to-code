//Write a C Program to read a 2D Array and then display it.


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
            
            
            
            
            for(i=0;i<n;i++)
            { for (j=0;j<m;j++)
                    printf("%d ",a[i][j]);
            printf("\n");}
            
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
