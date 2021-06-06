/*Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct student {
    char name[100];
    int roll;
    float marks;
} s[10];
    


int main() {int i;
            for(i=1;i<5;i++)
            scanf("%d %s %f",&s[i].roll,&s[i].name,&s[i].marks);
              
                
                
            
              for(i=1;i<5;i++)
              { printf("DETAILS OF ROLLNO %d\nNAME: %s\nMARKS: %0.2f",s[i].roll,s[i].name,s[i].marks);
           
             printf("\n");}
                  


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
