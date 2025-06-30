
#include <stdio.h>
int main() {
int num, i;
printf("Enter a number: ");
scanf("%d", &num);
printf("Binary: ");
for (i = 4; i >= 0; i--) {
int bit = (num >> i) & 1;
printf("%d", bit);
}
return 0;
}