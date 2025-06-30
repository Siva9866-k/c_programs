#include <stdio.h>


int globalVar = 10;

void show() {
    
    int localVar = 5;

    printf("In show():\n");
    printf("Global variable = %d\n", globalVar);  
    printf("Local variable = %d\n", localVar);    
}

int main() {
    
    int localVar = 20;

    printf("In main():\n");
    printf("Global variable = %d\n", globalVar);  
    printf("Local variable = %d\n", localVar);    

    show();  

    return 0;
}