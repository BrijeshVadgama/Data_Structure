// 3 - Create a structure Employee_Detail (Employee_id, Name, Designation, Salary). Write a program to read the detail from user and print it using Structure Pointer.[B]

#include <stdio.h>
struct emp_details
{
    int emp_id;
    char emp_name[50];
    char emp_designation[50];
    float emp_salary;
};
int main()
{
    struct emp_details e, *ptr;
    ptr = &e;
    printf("Enter Employee Id: ");
    scanf("%d", &e.emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.emp_name);

    printf("Enter Employee Designation: ");
    scanf("%s", e.emp_designation);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.emp_salary);

    printf("\nEmployee Id:: %d", ptr->emp_id);
    printf("\nEmployee Name:: %s", ptr->emp_name);
    printf("\nEmployee Designation:: %s", ptr->emp_designation);
    printf("\nEmployee Salary:: %.2f", ptr->emp_salary);
    return 0;
}