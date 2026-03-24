#include <stdio.h>
int main()
{
    // int num1, num2, num3, sum;
    // float avg;
    // printf("Enter three numbers :");
    // scanf("%d %d %d",&num1, &num2, &num3 );
    // sum = num1 + num2 + num3;
    // printf("sum is = %d\n", sum);
    // avg = (float)sum/3;
    // printf("avg is = %f\n", avg);
    // =====================================

    int age;
    printf("Enter age :");
    scanf("%d", &age);

    // applying logic
    if (age < 18)
    {
        printf("You are child");
    }
    else if (age > 18 && age <= 30)
    {
        printf("You are adult");
    }
    else
    {
        printf("You are old");
    }

    return 0;
}