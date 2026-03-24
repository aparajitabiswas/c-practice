#include<stdio.h>
int main(){
    int row, column, number;
    printf("Enter a number :");
    scanf("%d", &number);
    for(row=1; row<=number; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
 