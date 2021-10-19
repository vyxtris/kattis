#include <stdio.h>
int main()
{
	int N,i;
	int a[100];
	scanf("%d", &N);
	for (i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=0;i<N;i++){
		if (a[i]%2 == 0)
		{
			printf("%d is even\n", a[i]);
		}
		else {
			printf("%d is odd\n", a[i]);
		}
	}
	return 0;
}
