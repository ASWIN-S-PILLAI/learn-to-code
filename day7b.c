//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,c;
    scanf("%d\n%d %d",&a,&b,&c);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    switch(a)
    {case 1:
    printf("%d",c+b);
    break;
     case 2:
    printf("%d",b-c);
    break;
     case 3:
    printf("%d",b*c);
    break;
     case 4: 
     { if (c==0)
         printf("Cannot be determined");
     else
    printf("%0.1f",b/(float)c);}
    break;
     
    
    }
    
    return 0;
}
