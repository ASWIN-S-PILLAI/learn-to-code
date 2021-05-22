//Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int marks[100],n,i,j;
            scanf("%d\n",&n);
            for(i=0;i<n;i++)
            { scanf("%d\n",&j);
             marks[i]=j;}
            printf("Entered array:");
            for(i=0;i<n;i++)
             printf(" %d",marks[i]);
                    printf("\n%d",marks[1]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
