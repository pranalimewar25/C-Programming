/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter percentage of students:\n");
    scanf("%d",&marks);

    if(90<marks && marks<100) {
        printf("A");

    } else if(80<marks && marks<89) {
        printf("B");
        
    }  else if(70<marks && marks<79) {
        printf("C");
        
    }  else if(60<marks && marks<69) {
        printf("D");
        
    }  else if(marks<60) {
        printf("F");
        
    } else {
        printf("Incorrect input");
        
    }
}

