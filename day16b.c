//Write a C program to find the minimum and maximum element of an array.




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int i,j,a[100],n,k;
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            
            
            for(i=0;i<n-1;i++)
                for(j=0;j<n-1-i;j++)
                    if(a[j]>a[j+1])
                    {     k=a[j];
            a[j]=a[j+1];
                     a[j+1]=k;}
            
            
                printf("%d\n%d ",a[0],a[n-1]);
                    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


   
