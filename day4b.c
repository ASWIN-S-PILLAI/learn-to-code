//Write a C Program to find the maximum and minimum from three user inputted numbers.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            { if(a>b)
            {if(a>c)
             printf("%d",a);
            else
             printf("%d",c);}
             
            else 
                {if(b>c)
             printf("%d",b);
            else
             printf("%d",c);}}

            
          {  if(a<b)
            {if(a<c)
             printf("\n%d",a);
            else
             printf("\n%d",c);}
             
            else 
                {if(b<c)
             printf("\n%d",b);
            else
             printf("\n%d",c);}

          }  
    return 0;
}
