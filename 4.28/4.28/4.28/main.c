#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int job;
	int hour;
	double rate, sal;
	printf("(1���g�z�B2�����~�u�B3��������B4���s�u)\n�п�J�z��¾��(-1�����}):");
	scanf("%d", &job);

	while (job != -1)
	{

		switch (job)
		{
		case 1:
			puts("�z���T�w�g�~\n\n");
			break;
		case 2:
			printf("��J�z���o�g�u�@�ɼ�:");
			scanf("%d", &hour);
			printf("��J�z�����~($00.00):");
			scanf("%lf", &rate);
			if (hour > 40)
				sal = 40 * rate + (hour - 40)*rate*1.5;
			else
				sal = hour*rate;
			printf("�z���g�~��$%.2f\n\n", sal);
			break;
		case 3:
            printf("��J�z���g�P���B:($00.00)");
			scanf("%lf", &sal);
			sal = sal * 57 / 1000 + 250;
			printf("�z���g�~��$%.2f\n\n", sal);
			break;
		case 4:
			printf("��J�z���g�Ͳ����:");
			scanf("%d", &hour);
			printf("��J���~������($00.00):");
			scanf("%lf", &sal);
			sal = sal*hour;
			printf("�z���g�~��$%.2f\n\n", sal);
			break;
		default:
			puts("�п�J�Ʀr1~4\n\n");
			break;
		}
		printf("(1���g�z�B2�����~�u�B3��������B4���s�u)\n�п�J�z��¾��(-1�����}):");
		scanf("%d", &job);
	}
}