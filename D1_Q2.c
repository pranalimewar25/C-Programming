/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/

#include<stdio.h>
int main(){
    int x,y;
    printf(" Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("The sum of the two numbers is:%d \n",x+y);
    printf("The difference of the two numbers is:%d \n",x-y);
    printf("The product of the two numbers is:%d \n",x*y);
    printf("The quotient of the two numbers is:%d \n",x/y);
    return 0;

}

