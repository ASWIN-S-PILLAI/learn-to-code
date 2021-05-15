//Write a C Program to determine the factorial of a number.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a,i;int b=1;
            scanf("%d",&a);
             
            
             if(a<0)
             printf("ERROR");
            else 
            {for(i=1;i<=a;i++)
                    b=b*i;
             printf("%d",b);}
            

    
    return 0;
}
