// Display this GP 100,50,25,...... upto 'n' terms.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    double a = 100;
    for(int i=1; i<=n; i++)
    {
        printf("%.2lf ", a);
        a = a/2;
    }

    return 0;
}