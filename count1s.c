#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    while(n) {
        count += n & 1;
        n >>= 1;
    }
    printf("%d\n", count);
    return 0;
}