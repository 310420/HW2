#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double i,tot;
	int j,k;
	tot = 5000;
	i = 0.1;
	for ( k=0; k<5 ;k++ )
	{
		
		for (j = 0; j < 15; j++)
		    tot = 5000*i + tot;
		printf("利率為%.1f%%時，以5000元、長15年的投資金額為%.0f\n",i*100, tot);
        i=i + 0.005;
	}

	system("pause");
	return 0;
}