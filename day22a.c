/*Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int d[100],i,n;
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",d+i);
                            printf("DISPLAYING USING INDEX: ");
            
            
            for(i=0;i<n;i++)
                printf("%d ",d[i]);
            
            
             printf("\nDISPLAYING USING POINTERS: ");
            
            
            for(i=0;i<n;i++)
            printf("%d ",*(d+i));
            
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
