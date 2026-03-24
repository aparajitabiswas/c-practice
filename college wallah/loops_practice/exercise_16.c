// Write a program to print the sum of given numbers and its reverse.

#include<stdio.h>
int main(){
    int number, sum  , reverse=0 , lastDigit;
    printf("Enter a number :");
    scanf("%d", &number);

    while(number!=0)
    {
    lastDigit = number % 10;
    reverse = reverse*10+lastDigit;
    number = number/10;
    sum = reverse + number;
    }
    printf("Reverse is = %d\n ", reverse);

    // sum = reverse + number;
    {
        printf("Sum is = %d", reverse + number);
    }

    return 0;
}