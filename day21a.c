//Write a C program to find the second maximum element in an array of integer elements



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int i,j,k,n,a[100];
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            for(i=0;i<n;i++)
                for(j=0;j<n-1-i;j++)
                    if(a[j]>a[j+1])
                    {  k = a[j];
                    a[j]=a[j+1];
                     a[j+1]=k;}
            
            while(1)
            {if(a[n-1]!=a[n-2])
            { printf("%d",a[n-2]);
             break;}
             else
                 n=n-1;}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
