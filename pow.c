#include<stdio.h>
#include<math.h>
int main(){
    double x,result;
    int n;
    printf("Enter the base(X):");
    scanf("%lf",&x);
    printf("Enter the exponent(N):");
    scanf("%d",&n);
    result=pow(x,n);
    printf("%.2lf raised to the power %d is %.2lf\n", x, n, result);

    return 0;
}