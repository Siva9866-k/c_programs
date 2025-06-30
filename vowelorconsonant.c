#include <stdio.h>

int main() {
    char ch;

    // Input
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel\n");
            break;
        default:
  
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                printf("Consonant\n");
            else
                printf("Invalid input! Not an alphabet.\n");
    }

    return 0;
}