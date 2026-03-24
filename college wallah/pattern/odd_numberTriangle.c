#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);
    for(row=1; row<=number; row=row+2)
    {
        for(column=1; column<=row; column=column+2)
        {
            printf("%d ", column );
        }
        printf("\n");
    }

    return 0;
}