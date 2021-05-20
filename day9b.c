//Write a C program to print the following number pattern
//55555
// 4444
//  333
//   22
//    1





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {for(k=n-1;k>=i ;k--)
        printf(" ");
    for (j=1;j<=i;j++)
            printf("%d",i);
    
    
    printf("\n");}
    return 0;
}
