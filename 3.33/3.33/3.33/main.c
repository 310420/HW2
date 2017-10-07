#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b,i,j;
	printf("請輸入矩形之長:");
	scanf("%d", &a);
	printf("請輸入矩形之寬:");
	scanf("%d", &b);
	a = a - 2;
	for (i = 0; i < b; i++)
		printf("+");
	for (i = 0; i < a; i++)
	{
      printf("\n+");
	  for (j = 0; j < (b - 2); j++)
          printf(" "); 
      printf("+");
	}
	printf("\n");
	for (i = 0; i < b; i++)
		printf("+");

	system ("pause");
	return 0;
		
		
	
}