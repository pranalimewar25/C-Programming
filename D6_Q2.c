/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

#include<stdio.h>
int main(){
    int y;
    printf("Enter a number:\n");
    scanf("%d",&y);
    if(y>0){
        
        printf("The number is positive\n");

    } else if(y<0){

        printf("The number is negative\n");

    } else if(y==0){ 

         printf("The number is zero\n");
    } else{
         
        printf("Incorrec input");
        
    }

        
    
        
    
}

