#include <stdio.h>

int main() {
    char gender;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);  

    switch (gender) {
        case 'M':
        case 'm':
            printf("Gender: Male\n");
            break;
        case 'F':
        case 'f':
            printf("Gender: Female\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}