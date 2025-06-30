#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &n);
 int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the key to search:\n");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Key %d found at position %d\n", key, i + 1);
    else
        printf("Key %d not found\n", key);

    return 0;
}