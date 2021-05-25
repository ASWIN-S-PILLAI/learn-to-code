//Write a program in C to Find the Frequency of Characters.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { char a[100]; char b; int i,n=0;
             gets(a);
            scanf("%c",&b);
            for(i=0  ;i<=strlen(a);i++)
                if(a[i]==b)
                    n++;
                    printf("%d",n);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
