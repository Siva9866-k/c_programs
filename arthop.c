#include <stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int difference(int n1, int n2) {
    return n1 - n2;
}

int divide(int n1, int n2) {
    if (n2 != 0)
        return n1 / n2;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    int n1, n2;
    int sum, product, diff, quotient;

    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    sum = add(n1, n2);
    diff = difference(n1, n2);  
    product = mul(n1, n2);
    quotient = divide(n1, n2);

    printf("Sum is: %d\n", sum);
    printf("Product is: %d\n", product);
    printf("Quotient is: %d\n", quotient);
    printf("Difference is: %d\n", diff);

    return 0;
}