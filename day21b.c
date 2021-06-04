//Write a C program to count and display the number of Vowels, Consonants and spaces in a string



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {char a[1000];int i,c=0,d=0,e=0;
            gets(a);
            for(i=0;i<strlen(a);i++)
                if(a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' )
                    c++;
            else if(a[i]==' ' )
                d++;
            else
                e++;
            
            
            printf("%d\n%d\n%d",c,e,d);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
