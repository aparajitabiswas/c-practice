// 1^2 + 3^2 + 5^2 +.......+ n^2

#include<stdio.h>
int main(){
    int number, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i=i+2)
    {
        sum = sum + i*i;
    }
    printf("Sum is = %d", sum);
    return 0;
}