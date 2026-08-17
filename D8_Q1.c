/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include<stdio.h>
#include<ctype.h>
int main(){
    char C;
    printf("Enter a character:");
    scanf(" %c",&C);
    if(isupper(C)) {
        printf("%c is an uppercase alphabet",C);

    } else if(islower(C)) {
        printf("%c is an lowercase alphabet",C);

        
    } else if(isdigit(C)) {

        printf("%c is a digit",C);

    } else {
         printf("%c is a special character",C);
    }
    return 0;
    
}


