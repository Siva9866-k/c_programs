#include<stdio.h>
int main() {
    int n, i, fact = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Fact of the number is %d", fact);
    return 0;
}