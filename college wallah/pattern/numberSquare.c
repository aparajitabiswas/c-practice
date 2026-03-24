#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    for(int i=1; i<=number; i++)
    {
        for(int i=1; i<=number; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}