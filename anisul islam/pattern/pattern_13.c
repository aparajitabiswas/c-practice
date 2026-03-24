#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    for(row=1; row<=number; row++)
    {
        for(column=1; column<=number; column++)
        {
            if(column==1||row==number||column==row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}