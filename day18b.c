//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void primecheck(int a){int i,j=0;
                      for(i=1;i<=a;i++)
                      if(a%i==0)
                          j++;
                      if (j>2)
                       printf("Not prime");
                      else 
                          printf("Prime");}


void reverse(int a)
{int n=a,rev=0,r;
while(n>0)
{r=n%10;
rev=rev*10+r;
n=n/10;
}
 printf("%d",rev);
 }
    

int main() {int k,l,m;
            scanf("%d",&k);
            scanf("%d",&l);
            m=k+l;
            printf("%d\n",m);
            if(m%2==0)
                reverse (m);
            else
                primecheck(m);
            

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
