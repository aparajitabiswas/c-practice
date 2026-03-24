#include<stdio.h>
int main(){
    int number, row, column;
    printf("enter a number :");
    scanf("%d", &number);

    for(row=1; row<=number; row++)
    {
    //space = number-row
    //ptinting space
    for(column=1; column<=number-row; column++)
    {
        printf(" ");
    }
    for(column=1; column<=row; column++)
    {
        printf("%c", column);
    }
    printf("\n");
    }
    return 0;
}