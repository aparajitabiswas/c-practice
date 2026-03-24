#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    for(int i=number; i<=number; i++)
    {
        if(number%7==0)
    {
       printf("Good Bye");
       break;
    }

    printf("The number is=%d\n",i);

    }
    
    return 0;
}

