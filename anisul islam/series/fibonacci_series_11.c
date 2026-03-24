// 0 1 1 2 3 5 8.............

#include<stdio.h>
int main(){
    int number, first=0, second=1, count=0, fibonacci;
    printf("Enter a number :");
    scanf("%d", &number);

    while(count<number)
    {

    if(count<=1)
    {
    fibonacci = count;
    }

    else
    {
        fibonacci = first + second;
        first = second;
        second = fibonacci;
    }
    }
    printf("%d ", fibonacci);
    count++;

    return 0;
}