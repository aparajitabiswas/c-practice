#include<stdio.h>
int main(){
    double num1, num2;
    char operator;

    printf("Enter a number :");
    scanf("%lf", &num1);

    printf("Enter a operator :");
    scanf("%s", &operator);

    printf("Enter another number :");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+':
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        break;

        case '-':
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        break;

        case '*':
        printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        break;

        case '/':
        printf("%lf / %lf = %lf", num1, num2, num1 / num2);
        break;
    }

    return 0;
}