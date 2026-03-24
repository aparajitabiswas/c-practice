// Write a program to check a number is prime or not.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int a=0;
    for(int i=2; i<=n-1; i++)
    {
    if(n%i==0)
    {
    a=1;
    break;
    }
    }

    if(a==0)
    {
        printf("It's a prime number\n");
    }
     else if(n==1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
        printf("It's a composite number");
    }
    return 0;
}