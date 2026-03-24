#include<stdio.h>
int main(){
    int year;
    printf("Enter a year :");
    scanf("%d", &year);

    if(year%4==0)
    {
    printf("Leap Year");
    }

    else
    {
    printf("Normal year");
    }

    return 0;
}