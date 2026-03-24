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
        printf("number1 + number2 = %d", number1, number2, answer = number1 + number2);
    }
    else if(operator == '-')
    {
        printf("number1 - number = %d", answer = number1 - number2);
    }
    else if(operator=='*')
    {
        printf("number1 * number2 = %d", answer = number1 * number2);
    }
    else if(operator=='/')
    {
        printf("number1 / number2 = %d", answer = number1 / number2);
    }
    return 0;
}