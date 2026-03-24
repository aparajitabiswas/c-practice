#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d", &number);

    if(number%2== 0 && number>0)
    {
        printf("Even number and positive number");
    }

    else if(number%2== 0 && number<0)
    {
        printf("Even number and negative number");
    }

    else if(number!=0 && number>0)
    {
        printf("Odd number and positive number");
        
    }

    else if(number!=0 && number<0)
    {
        printf("Odd number and Negative number");
        
    }

    return 0;
}