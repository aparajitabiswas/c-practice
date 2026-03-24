#include<stdio.h>
int main(){
    int number, row, column;
    printf("enter a number :");
    scanf("%d", &number);

    for(row=number; row>=1; row--)
    {
    //space = number-row
    //ptinting space
    for(column=1; column<=number-row; column++)
    {
        printf(" ");
    }
    for(column=1; column<=row; column++)
    {
        printf("%d", column);
    }
    printf("\n");
    }
    return 0;
}