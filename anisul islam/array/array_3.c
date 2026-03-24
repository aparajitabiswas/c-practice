#include<stdio.h>
int main(){
    int number[10];
    printf("Enter numbers :");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &number[i]);
    }

    int maximum = number[0];
    for(int i=0; i<10; i++)
    {
        if(maximum < number[i])
        maximum = number[i];
    }

    printf("maximum number is %d", maximum);

    return 0;
}













