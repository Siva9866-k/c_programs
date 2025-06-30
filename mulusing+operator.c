#include<stdio.h>
int main(){
    int a,b,result=0;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        result=result+a;
    }
    printf("Product=%d\n",result);
}
/*
4,3
result=0+4=4
4+4=8
8+4=12
4*3=12


*/