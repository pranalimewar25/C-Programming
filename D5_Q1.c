/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include<stdio.h>
#include<math.h>

int main(){
    int P,T,R;
    printf("Enter the principal amount,rate,time,\n");
    scanf("%d%d%d%",&P,&T,&R);
    int SI=P*R*T/100;
    int A=
    int CI=A-P;
    printf("Value of simple interest is:%d\n",SI);
    printf("Value of compound interest is%d\n",CI);
    return 0;

    

}

