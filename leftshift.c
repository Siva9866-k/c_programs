#include <stdio.h>

int main() {
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter how many bits to shift left: ");
    scanf("%d", &shift);

    int result = num << shift;

    printf("Result after left shift: %d\n", result);

    return 0;
}