// Write a program to print the sum of given numbers.

#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d", &number);

    int sum = 0;
    int last_digit;
    while(number!=0)
    {
    last_digit = number%10;
    sum = sum + last_digit;
    number= number/10;
    }

    printf("The sum or digits are = %d", sum);

    return 0;
}