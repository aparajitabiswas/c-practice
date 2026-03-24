// 1.5 + 2.5 + 3.5 +.......+ n

#include<stdio.h>
int main(){
    float number, sum = 0;
    printf("Enter a number : ");
    scanf("%f", &number);

    for(float i=1.5; i<=number; i++)
    {
        sum = sum + i;
    }
    printf("Sum is = %.2f", sum);
    return 0;
}