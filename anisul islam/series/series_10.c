// Sum = 1 - 2 + 3 - 4 +........

#include<stdio.h>
int main(){
    int number, sum1=0, sum2=0, answer;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(int i=1; i<=number; i=i+2)
    {
        sum1= sum1 + i;
    }

    for(int i=2; i<=number; i=i+2)
    {
        sum2= sum2 +i;
    }
    answer = sum1 - sum2;

    printf("%d", answer);

    return 0;
}