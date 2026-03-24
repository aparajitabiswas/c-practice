// 1^2 * 2^2 * 3^2 *.......* n^2

#include<stdio.h>
int main(){
    int number, mul = 1;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i++)
    {
        mul = mul * i*i;
    }
    printf("Answer is = %d", mul);
    return 0;
}