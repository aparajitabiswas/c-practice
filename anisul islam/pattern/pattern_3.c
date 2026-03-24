#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);

    for(row=1; row<=number; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%d ", row%2);
        }
        printf("\n");
    }
    
    return 0;
}