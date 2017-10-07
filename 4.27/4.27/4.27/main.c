#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int s1, s2, l;
	for ( s1 = 1; s1 < 500; s1++)
	{
		for (s2 = 1; s2 < 500; s2++)
		{
			for (l = 1; l < 500; l++)
			{
				if (( s1*s1 + s2*s2 )== l*l)
					printf("%d,%d,%d為長邊是500內且為整數之直角三角形\n",s1,s2,l);

			}
		}
	}
	system("pause");
	return 0;
}