#include <stdio.h>
int main(){
    float height;
    float x_1;
    float x_2;
    printf("enter your x 1: \n");
    scanf("%f", &x_1);
    printf("enter your x 2: \n");
    scanf("%f", &x_2);
    printf("enter your height: \n");
    scanf("%f", &height);
    printf("the area of the trapezoid is %f\n", 0.5*height*(x_1+x_2));
    return 0;
}