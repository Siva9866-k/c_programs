#include <stdio.h>

void fact_num(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", n, fact);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact_num(n);
    return 0;
}
