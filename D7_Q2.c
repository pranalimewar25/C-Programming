/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.*/

#include<stdio.h>
int main(){
    char C;
    printf("Enter a character\n");
    scanf("%c",&C);
    if((C=='a'|| C=='e'||C=='i'||C=='o'||C=='u') ||C=='A'||C=='E'||C=='I'||C=='O'||C=='U' ) {
        printf("Character is a vowel");

    } else {

        printf("Character is a consonant");


    }
}

