#include<stdio.h>

struct Employee {
int id;
char name[100];
char designation[100];
char department[100];
float basicSalary;
};

void printPaySlip(struct Employee emp) {
	float allowance = 0.1 * emp.basicSalary;
	float grossSalary = emp.basicSalary + allowance;
	float tax = 0.05 * emp.basicSalary;
	float netSalary = grossSalary - tax;


printf("Pay Slip\n");
printf("Employee ID: %d\n", emp.id);
printf("Name: %s\n", emp.name);
printf("Designation: %s\n", emp.designation);
printf("Department: %s\n", emp.department);
printf("Basic Salary: %.2f\n", emp.basicSalary);
printf("Allowance: %.2f\n", allowance);
printf("Gross Salary: %.2f\n", grossSalary);
printf("Tax: %.2f\n", tax);
printf("Net Salary: %.2f\n", netSalary);
}

int main()
{
	struct Employee emp;

	printf("Enter Employee ID: ");
	scanf("%d", &emp.id);

}
