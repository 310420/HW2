#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double pri, rat,in;
	int day;

	printf("Enter loan principal (-1 to end):");
	scanf("%lf", &pri);

	while (pri != -1)
	{
		printf("Enter interest rate:");
		scanf("%lf", &rat);
		printf("Enter term of the loan in days:");
		scanf("%d", &day);
		in = pri*rat*day / 365;
		printf("The interest charge is $%.2f\n\n",in);

		printf("Enter loan principal (-1 to end):");
		scanf("%lf", &pri);
	}

}