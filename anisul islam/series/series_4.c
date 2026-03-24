// 1^2 + 2^2 + 3^2 +.......+ n^2

#include<stdio.h>
int main(){
    int number, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i++)
    {
        sum = sum + i*i;
    }
    printf("Answer is = %d", sum);
    return 0;
}