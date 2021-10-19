#include <stdio.h>
int main()
{
	int n, i, p;
	double t, a, sum;
	scanf("%d", &n);
	getchar();
	p = n;
	for (i=1;i<=n;i++)
		{
			scanf("%lf", &t);
			if (t == -1)
				{
				t = 0;
				p--;	
				}
			a += t;
		}
		sum = a / p;
		printf("%lf", sum);
		return 0;
}
