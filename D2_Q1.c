/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

# include<stdio.h>
int main (){
    int l,b;
    printf("Enter length of rectangle:\n");
    printf("Enter breadth of rectangle:\n");
    scanf("%d%d",&l,&b);
    printf("Area of the reactangle is %d \n",l*b);
    printf("Perimeter of the reactangle is %d",2*l+2*b);
    return 0;
    

}