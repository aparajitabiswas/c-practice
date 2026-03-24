#include<stdio.h>
int main(){
    int number[10], sum=0, n;
    printf("Enter numbers:");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &number[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum = sum + number[i];
    }

    printf("Sum is %d\n", sum);
    printf("Average is %f", (float)sum/n);
    
    return 0;
}