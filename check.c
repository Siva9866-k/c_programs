#include <stdio.h>

int main() {
    int n, cont = 1;
    while(cont) {
        scanf("%d", &n);
        if(n > 0) printf("Positive\n");
        else if(n < 0) printf("Negative\n");
        else printf("Zero\n");
        scanf("%d", &cont);
    }
    return 0;
}