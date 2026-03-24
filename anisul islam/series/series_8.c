// 1 * 3 * 5 *.......* n

#include<stdio.h>
int main(){
    int number, mul = 1;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i=i+2)
    {
        mul = mul * i;
    }
    printf("answer is = %d", mul);
    return 0;
}