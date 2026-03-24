#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);
    int a=1;
    for(row=1; row<=number; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}