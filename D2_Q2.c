/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/

#include<stdio.h>
int main(){
    float rad;
    printf("Enter radius of the circle:");
    scanf("%d",&rad);
    printf("Area of the circle is :%d \n",2.14*rad*rad);
    printf("Circumference of the circle is :%d \n", 2*2.14*rad);
    return 0;
    
    
}


