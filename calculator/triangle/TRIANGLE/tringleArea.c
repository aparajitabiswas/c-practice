#include<stdio.h>
#include<math.h>
int main(){
    int arm1, arm2, arm3, sum, range;
    float area;
    printf("First Arm :");
    scanf("%d", &arm1);
    printf("Second Arm :");
    scanf("%d", &arm2);
    printf("Thrid Arm :");
    scanf("%d", &arm3);
    sum = arm1 + arm2 + arm3;
    range = sum/2;
    area = sqrt(range*(range - arm1)*(range - arm2)*(range - arm3));
    printf("Area is : %f", area);
    return 0;
}