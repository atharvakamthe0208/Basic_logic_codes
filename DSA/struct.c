#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float salary;
};
void update()
{
    
    int up, ch;

    printf("\nEnter employee number to update (1 to %d): ", n);
    scanf("%d", &up);

    up = up - 1;   

    printf("Enter which data to update\n");
    printf("1. ID\n2. Name\n3. Salary\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Enter new Employee ID: ");
            scanf("%d", &emp[up].empId);
            break;

        case 2:
            printf("Enter new Employee Name: ");
            scanf("%s", emp[up].name);
            break;

        case 3:
            printf("Enter new Employee Salary: ");
            scanf("%f", &emp[up].salary);
            break;

        default:
            printf("Invalid Choice!");
    }

}
void display()
{
    printf("\n===================Employee Details:===================\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].empId);
        printf("Employee Name : %s\n", emp[i].name);
        printf("Employee Salary : %.2f\n", emp[i].salary);
        printf("=========================================================");
    }
}
int main()
{
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    printf("\n=======================================================\n");
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    return 0;
}