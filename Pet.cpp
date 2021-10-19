#include <stdio.h>
int main()
{
	int a, total = 0, pivot = 0, temp = 0;
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<4;j++)
		{
			scanf("%d", &a);
			total += a;
		}
		if (total>temp)
		{
			temp = total;
			pivot = i;
		}
	total = 0;
	}
	printf("%d %d", pivot+1, temp);
	return 0;
}
