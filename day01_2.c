  //Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)

#include <stdio.h>

int main()
{char a;int b; float c;double d;
    scanf("%c\n %d\n %f\n %lf",&a,&b,&c,&d);
        
printf("%c\n%d\n%0.6f\n%0.6lf",a,b,c,d);
       return 0;}
