//Write a C program to find the number of words in a string. Also reverse string.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void words(char a[]) {int s=1,i;
            
            for(i=0;a[i]!='\0';i++)
                if(a[i]== ' ' || a[i]=='\n')
                    s++;
            printf("no of words = %d\n",s);

    
                    
}

void reverse(char a[]){int i,s=0;
                     for(i=0;a[i]!='\0';i++)
                         s=i;
                       
                       
                     for(i=s;i>=0;i--)
                         printf("%c",a[i]);
                       
                         
    
}
 int main(){char b[1000];
           gets(b);
           words(b);
           reverse(b);}
     
