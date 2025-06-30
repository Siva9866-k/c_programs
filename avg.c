#include<stdio.h>
void sum_avg(int a,int b){
    int sum;float avg;
    sum= a+b;
    avg=sum/2;
    printf("The sum  is :%d",sum);
    printf("The aVG is :%f",avg);
}
int main(){
    int a,b,sum;
    float avg;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    sum_avg(a,b);
    return 0;

    
}