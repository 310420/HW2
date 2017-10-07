#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hour;
	double rate,sal;

	printf("Enter # of hours worked (-1 to end):");
	scanf("%d", &hour);

	while (hour != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%lf", &rate);
		if (hour > 40)
			sal = 40*rate + (hour - 40)*rate*1.5;
		else
			sal = hour*rate;
		printf("Salary is $%.2f\n\n", sal);

		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hour);

	}
}