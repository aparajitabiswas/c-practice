#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    for(row=1; row<=number; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%c ", 64+row);
        }
        printf("\n");
    }

    return 0;
}