#include <stdio.h>
int main()
{
	float sal, ex,rent,gpay;
	printf("Enter the salary of ramesh\n");
	scanf("%f",&sal);
	ex = 0.4*sal;
	rent = 0.2*sal;
	gpay = sal + ex + rent;
	printf("Salary of Ramesh is: %f\n", sal);
	printf("Expenditure: %f\n",ex);
	printf("House Rent: %f\n",rent);
	printf("Gross Salary is : %f\n",gpay);
	
	
	
return 0;	
}