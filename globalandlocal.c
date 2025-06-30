#include <stdio.h>

// Global variable
int globalVar = 10;

void show() {
    // Local variable
    int localVar = 5;

    printf("In show():\n");
    printf("Global variable = %d\n", globalVar);  // Can access
    printf("Local variable = %d\n", localVar);    // Can access
}

int main() {
    // Local variable
    int localVar = 20;

    printf("In main():\n");
    printf("Global variable = %d\n", globalVar);  // Can access
    printf("Local variable = %d\n", localVar);    // Can access

    main();  // Call function

    return 0;
}