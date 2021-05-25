//Write a C program to change the case of alphabets.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {char c[100];int i;
            gets(c);
            for(i=0;i<=strlen(c);i++)
                
             if( c[i]>=65 && c[i]<=90)
            c[i]=c[i]+32;
            else if(c[i]>=97 && c[i]<=122)
                c[i]=c[i]-32;
            
      puts(c)  ;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
