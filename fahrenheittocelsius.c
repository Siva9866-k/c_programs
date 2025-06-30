#include <stdio.h>

int main() {
    int choice;
    float celsius, fahrenheit;

    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Fahrenheit to Celsius\n");
    printf("2. Convert Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}