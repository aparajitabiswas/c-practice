#include<stdio.h>
int main(){
    int row, column, number;
    printf("Enter a number :");
    scanf("%d", &number);
    for(row=1; row<=number; row++)
    {
        for(column=1; column<=number; column++)
        {  int a=number/2+1;
           if(row==a || column==a)
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