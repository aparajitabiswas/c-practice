#include<stdio.h>
#include<math.h>
int main(){
    int arm1, arm2, arm3, range, area, arm_add;
    printf("Arm number 1:");
    scanf("%d", &arm1);
    printf("Arm number 2:");
    scanf("%d", &arm2);
    printf("Arm number 3:");
    scanf("%d", &arm3);
    arm_add = arm1 + arm2 + arm3;
    range = arm_add/2;
    // printf("Range is :%d", range);
    area = sqrt(range*(range - arm1)*(range - arm2)*(range - arm3));
    printf("Area is : %d", area);
    return 0;

}
