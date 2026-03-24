#include<stdio.h>
int main(){
    int num1 = 32, num2 = 12, result;

    //bitwise and(&)
    result = num1 & num2;
    printf("%d\n", result);

    //bitwise or(|)
    result = num1 | num2;
    printf("%d\n", result);

    //bitwise ex-or(^)
    result = num1 ^ num2;
    printf("%d\n", result);

    return 0;
}