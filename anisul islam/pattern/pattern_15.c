#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    int count=1;

    for(row=1; row<=number; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%d ", count++);
        }
        printf("\n");
    }

    return 0;
}