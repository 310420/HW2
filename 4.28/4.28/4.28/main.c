#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int job;
	int hour;
	double rate, sal;
	printf("(1為經理、2為時薪工、3為抽佣金、4為零工)\n請輸入您的職位(-1為離開):");
	scanf("%d", &job);

	while (job != -1)
	{

		switch (job)
		{
		case 1:
			puts("您為固定週薪\n\n");
			break;
		case 2:
			printf("輸入您的這週工作時數:");
			scanf("%d", &hour);
			printf("輸入您的時薪($00.00):");
			scanf("%lf", &rate);
			if (hour > 40)
				sal = 40 * rate + (hour - 40)*rate*1.5;
			else
				sal = hour*rate;
			printf("您的週薪為$%.2f\n\n", sal);
			break;
		case 3:
            printf("輸入您的週銷售額:($00.00)");
			scanf("%lf", &sal);
			sal = sal * 57 / 1000 + 250;
			printf("您的週薪為$%.2f\n\n", sal);
			break;
		case 4:
			printf("輸入您的週生產件數:");
			scanf("%d", &hour);
			printf("輸入產品單位價格($00.00):");
			scanf("%lf", &sal);
			sal = sal*hour;
			printf("您的週薪為$%.2f\n\n", sal);
			break;
		default:
			puts("請輸入數字1~4\n\n");
			break;
		}
		printf("(1為經理、2為時薪工、3為抽佣金、4為零工)\n請輸入您的職位(-1為離開):");
		scanf("%d", &job);
	}
}