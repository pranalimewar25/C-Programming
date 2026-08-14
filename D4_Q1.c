/*Q7: Write a program to swap two numbers without using a third variable.*/


  #include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("a is: %d\nb is: %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is: %d\nb is: %d",a,b);
    return 0;
    
}