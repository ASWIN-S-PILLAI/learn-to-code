//Write a C Program to identify if a number is a palindrome or not.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,r,rev=0,m;
            scanf("%d",&n);
            m=n;
            while(n>0)
            {  r=n%10;
                rev=rev*10+r;
                n=n/10;
     
            }
            if(rev==m)
                printf("Yes");
            else
                printf("No");

   
    return 0;
}
