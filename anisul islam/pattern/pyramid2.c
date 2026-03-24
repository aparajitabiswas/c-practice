#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    for(row=number; row>=1; row--)
    {
        for(column=1; column<=number-row; column++)
        {
            printf(" ");
        }
        for(column=1; column<=2*row-1; column++)
        {
            printf("* ", column);
        }
        printf("\n");
    }

    return 0;
}