#include<stdio.h>
int main(){
    int number1, number2, answer;
    char operator;

    printf("Enter a number :");
    scanf("%d", &number1);

    printf("Enter a operator :");
    scanf("%s", &operator);

    printf("Enter another number :");
    scanf("%d", &number2);

    if(operator == '+')
    {
        printf("\n%d + %d = %d", answer= number1 + number2);
        // printf("%d", number1);
        // printf("%s", operator);
        // printf("%d", number2);
        // printf("%d", number1+number2);
        // printf("%d(number1) %s(+) %d(number2) = %d", answer = number1 + number2);
    }
    return 0;
}