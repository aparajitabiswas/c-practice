#include<stdio.h>
int main(){
    int row, column;
    printf("Enter number of rows :");
    scanf("%d", &row);
    printf("Enter number of column :");
    scanf("%d", &column);

    for(int i=1; i<=row; i++)
    {
        for(int i=1; i<=column; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}