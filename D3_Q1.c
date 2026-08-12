/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

#include<stdio.h>
int main(){
    float C;
    printf("Enter the temperature in celsius");
    scanf("%f",&C);
    float F=(C*9/5)+32;
    printf("Coverted temperature is:%f",F);
    return 0;
    
}

