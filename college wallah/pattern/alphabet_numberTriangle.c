#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);
    for(row=1; row<=number; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%d ", column );
        }
        printf("\n");
        for(column=1; column<=row; column++)
        {
            printf("%c ", column+64 );
        }
        printf("\n");

        if(row<=row+2)
        printf("%d " );

    }

    
    return 0;
}