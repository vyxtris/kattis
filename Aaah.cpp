#include <stdio.h>
#include <string.h>
int main()
{
	char input1[1200], input2[1200];
	int len1, len2;
	scanf("%s", input1); // john
	scanf("%s", input2); // doctor
	len1 = strlen(input1);
	len2 = strlen(input2);
	if (len1 < len2 )
	{
		printf("no");
	}
	else 
	{
		printf("go");
	}
	return 0;
}
