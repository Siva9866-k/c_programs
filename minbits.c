#include <stdio.h>

int main() {
    int num, bits = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num == 0) {
        bits = 1; 
    } else {
        while (num > 0) {
            bits++;
            num = num / 2;
        }
    }

    printf("Minimum number of bits required: %d\n", bits);
    return 0;
}