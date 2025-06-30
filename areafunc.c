#include <stdio.h>

int areaofrect(int length, int breadth) {
    int area;
    area = length * breadth;
    return area;
}

int main() {
    int length = 10, breadth = 10;
    int area = areaofrect(length, breadth);
    printf("%d\n", area);
    return 0;
}
