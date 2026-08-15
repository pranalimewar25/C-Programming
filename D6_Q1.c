/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.*/

#include<stdio.h>
int main(){
    int i;
    printf("Enter any number:\n");
    scanf("%d",&i);
    if (i%2==0) {
       
        printf("The number is even\n");
    
    } else {
       
        printf("The number is odd\n");
    }
    

}

