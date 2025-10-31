#include <stdio.h>//created by sakshi
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};
void calculateSalary(struct Employee *employee) {
    float deduction = 0.1 * employee->salary;
    employee->salary -= deduction;
}
void displayEmployeeDetails(struct Employee employee) {
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Name: %s\n", employee.name);
    printf("Salary: $%.2f\n", employee.salary);
}
int main() {
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.employeeID);
    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Enter Salary: $");
    scanf("%f", &emp.salary);
    calculateSalary(&emp);
    printf("\nEmployee Details:\n");
    displayEmployeeDetails(emp);
    return 0;
}
