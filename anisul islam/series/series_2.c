// 1 + 4 + 7 +.......+ n

#include<stdio.h>
int main(){
    int number, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i=i+3)
    {
        sum = sum + i;
    }
    printf("Sum is = %d", sum);
    return 0;
}