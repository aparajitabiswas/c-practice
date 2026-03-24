#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    for(row=number; row>=1; row--)
    {
        for(column=1; column<=row; column++)
        {
            printf("%d ", column);
        }
        printf("\n");
    }
    
    return 0;
}