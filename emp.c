#include <stdio.h>

struct employee {
    int id;
    float salary;
    char name[30];
};

int main() {
    struct employee emp;

    printf("Enter Id, Name, and Salary:\n");
    scanf("%d %s %f", &emp.id, emp.name, &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Id: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}