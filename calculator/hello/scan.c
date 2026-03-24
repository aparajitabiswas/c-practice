#include<stdio.h>
int main(){
    int num1, num2, sum, sub, mul, div, mod;
    printf("enter a number :");
    scanf("%d" , &num1);
    printf("enter another number:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("sum is : %d\n", sum);
    sub = num1 - num2;
    printf("sub is : %d\n", sub);
    mul = num1 * num2;
    printf("mul is : %d\n", mul);
    div = num1 / num2;
    printf("div is: %d\n", div);
    mod = num1 % num2;
    printf("mod is: %d\n", mod);
    return 0;

}