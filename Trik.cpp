#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char gerak[51];
	short a = 1, b = 0, c = 0;
	short t;
	scanf("%s",gerak);
	size_t len = strlen(gerak);
	for (i = 0; i < len; ++i )
	{
		if (gerak[i] == 'A')
		{
		t = a;
		a = b;
		b = t;
		}
		else if (gerak[i] == 'B')
		{
		t = b;
		b = c;
		c = t;
		}
		else 
		{
		t = a;
		a = c;
		c = t;
		}	
	}
	if(a == 1) printf("1"); 
	if(b == 1) printf("2");
	if(c == 1) printf("3");
	return 0;
}


