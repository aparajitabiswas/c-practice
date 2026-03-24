// 1 * 2 * 3 *.......* n

#include<stdio.h>
int main(){
    int number, mul = 1;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i++)
    {
        mul = mul * i;
    }
    printf("answer is = %d", mul);
    return 0;
}