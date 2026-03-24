// Write a program to print the sum of even numbers.

#include<stdio.h>
int main(){
    int number, lastDigit, sum=0;
    printf("Enter a number :");
    scanf("%d", &number);

    while(number!=0)
    {
        lastDigit= number%10;
        if(lastDigit%2==0)
        sum = sum+ lastDigit;
        number= number/10;
    }

    printf("Sum is = %d", sum);
    
    return 0;

}