#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	scanf("%s", a);
	size_t len = strlen(a);
	for (size_t i = 0; i < len; i++)
	{
		if (a[i] < 91 && a[i] > 64)
		{
			printf("%c", a[i]);
		}
	}
	printf("\n");
	return 0;
}
