#include<stdio.h>
#include<math.h>
int main(){
    float base, hight, area_of_triangle, area_of_rectangle, arm, area_of_square, power;
    printf("Enter base :");
    scanf("%f", &base);
    printf("Enter hight :");
    scanf("%f", &hight);
    printf("Enter arm :");
    scanf("%f",&arm);
    printf("Enter power :");
    // scanf("%f", &power);
    area_of_triangle=(float) 1/2*base*hight;
    printf("The area of the triangle is = %f\n", area_of_triangle );
    area_of_rectangle= hight*base;
    printf("the area of the rectangle is = %f\n",area_of_rectangle);
    area_of_square=pow(arm,2);
    printf("The area of the square = %f", area_of_square); 
    return 0;
}
