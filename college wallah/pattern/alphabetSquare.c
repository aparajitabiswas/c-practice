#include<stdio.h>
int main(){
    int number, row, column;
    printf("Enter a number :");
    scanf("%d", &number);
    for(row=1; row<=number; row++)
    {
        for(column=1; column<=number; column++)
        {
            printf("%c ", column+64);
        }
        printf("\n");
    }
    
    return 0;
}