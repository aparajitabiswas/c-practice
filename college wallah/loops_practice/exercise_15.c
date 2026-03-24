// Write a program to print reverse of a given number.

#include<stdio.h>
int main(){
    int number, lastDigit, sum=0;
    printf("Enter a number :");
    scanf("%d", &number);

    
    while(number!=0)
    {
        lastDigit= number%10;
        sum = sum * 10+ lastDigit;
        number= number/10;
    }

    printf("Sum is = %d", sum);

}