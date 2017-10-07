#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int m =0;
	double bal, cha, cre, lim;

    printf("Enter account number (-1 to end):");
	scanf("%d", &m);

	while (m != -1)
	{
		
		printf("Enter beginning balance:");
		scanf("%lf", &bal);
		printf("Enter total charges:");
		scanf("%lf", &cha);
		printf("Enter total credits:");
		scanf("%lf", &cre);
		printf("Enter credit limit:");
		scanf("%lf", &lim);
		if (lim<(bal+ cha- cre))
		{
			bal= (float)bal +(float) cre;
			printf("Account:%d\n",m);
			printf("Credit limit:%.2f\n",lim);
			printf("Balance:%.2f\n",  bal);
			printf("Credit Limit Exceeded\n\n");
		}

		printf("Enter account number (-1 to end):");
		scanf("%d", &m);


	}
}