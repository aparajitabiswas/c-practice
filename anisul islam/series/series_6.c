// 1 + 1/2 + 1/3 +.........+1/n

#include<stdio.h>
int main(){
    float number, sum=0;
    printf("Enter a number :");
    scanf("%f", &number);

    for(float i=1; i<=number; i++)
    {
    sum = sum + 1/i;
    }
    printf("Sum is = %f", sum);    

    return 0;
}