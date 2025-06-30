#include<stdio.h>
#define PI 3.1416
int main(){
    float perimeter,area,radius;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area=PI * radius * radius;
    perimeter=2 * PI * radius;
    printf("Area of the circle is:%f\n",area);
        printf("perimeter of the circle is:%f\n",perimeter);
        return 0;




}