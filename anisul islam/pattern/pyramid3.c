#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    for(row=1; row<=number; row++)
    {
        for(column=1; column<=number-row; column++)
        {
            printf(" ");
        }
        for(column=1; column<=row; column++)
        {
            printf("* ", column);
        }
        printf("\n");
    }

    for(row=number-1; row>=1; row--)
    {
        for(column=1; column<=number-row; column++)
        {
            printf(" ");
        }
        for(column=1; column<=row; column++)
        {
            printf("* ", column);
        }
        printf("\n");
    }

    return 0;
}