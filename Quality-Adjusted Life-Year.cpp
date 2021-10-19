#include <stdio.h>
int main()
{
	int N;
	double q, y, x;
	scanf("%d", &N);
	getchar();
	while(N--)
	{
		scanf("%lf %lf", &q, &y);
		x += (q * y);
	}
	printf("%.3lf", x);
	return 0;
}
