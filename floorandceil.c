#include<stdio.h>
#include<math.h>
int main(){
    double num;
    printf("Enter a number:");
    scanf("%lf",&num);
    printf("Ceil:%.2f",ceil(num));
    printf("Floor:%.2f",floor(num));
}