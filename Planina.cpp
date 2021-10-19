#include <stdio.h>
int main()
{
	int N,a,b=2;
	scanf("%d", &N);
	for (int i=0;i<N;i++)
	{
		a = 1<<i;
		b += a;
	}
	printf("%d", b*b);
	return 0;
}
