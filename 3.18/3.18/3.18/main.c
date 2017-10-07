#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double sal;

	printf("Enter sales in dollars ( -1 to end ):");
	scanf("%lf", &sal);

	while (sal != -1)
	{
		sal = sal * 9 / 100+200;
		printf("Salary is: $%.2f\n\n",sal);
		
		printf("Enter sales in dollars ( -1 to end ):");
		scanf("%lf", &sal);
	}
}