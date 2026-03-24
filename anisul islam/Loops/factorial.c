#include<stdio.h>
int main(){
    int i, factorial=1, number;
    printf("Enter a number :");
    scanf("%d", &number);

    // factorial = factorial * i;
    for(i=1; i<=number; i++)
    {
        factorial = factorial * i;
        // printf("%d", factorial);
    }

    printf("%d", factorial);

    return 0;

}