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
            printf("%d", column);
        }
        for(column=row-1; column>=1; column--)
        {
            printf("%d", column);
        }
        printf("\n");
    }
    return 0;
}