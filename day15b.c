//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int k,j, i,a[100][100],arow,acoloumn,b[100][100],brow,bcoloumn,sum=0,product[100][100];
            scanf("%d",&arow);
            scanf("%d",&acoloumn);
            for(i=0;i<arow;i++)
                for(j=0;j<acoloumn;j++)
                    scanf("%d",&a[i][j]);
            
             scanf("%d",&brow);
            scanf("%d",&bcoloumn);
            if(brow!=acoloumn)
            { printf("ERROR");
             return 0;}
            
            else
                
            for(i=0;i<brow;i++)
                for(j=0;j<bcoloumn;j++)
                    scanf("%d",&b[i][j]);
            
            
            
            for(i=0;i<arow;i++)
                for(j=0;j<bcoloumn;j++)
                { for(k=0;k<brow;k++)
                        sum+=a[i][k]*b[k][j];
            product[i][j]=sum;
                sum=0;}
            
            
            for(i=0;i<arow;i++)
            { for(j=0;j<bcoloumn;j++)
                    printf("%d ",product[i][j]);
            printf("\n");}
            
            
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
