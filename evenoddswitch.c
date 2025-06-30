#include<stdio.h>
int main(){
    int num;
printf("Enter a number:\n");
scanf("%d",&num);
switch(num % 2){
    case 0:
        printf("Even number\n");
    default:
        printf("odd number\n");
        
        
}
return 0;
}