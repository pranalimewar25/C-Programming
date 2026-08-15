/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format*/

#include<stdio.h>
int main(){
    int time;
    float H,M;
    printf("Enter time in seconds:\n");
    scanf("%d",&time);
    M=(float)time/60;
    H=(float)time/3600;
    printf("The given time in minutes is:%f\n",M);
    printf("The given time in hours is:%f\n",H);
    return 0;
}

