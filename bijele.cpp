#include <stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	(a!=1) ? printf("%d ", 1-a) : printf("%d ", a-1);
	(b!=1) ? printf("%d ", 1-b) : printf("%d ", b-1);
	(c!=2) ? printf("%d ", 2-c) : printf("%d ", c-2);
	(d!=2) ? printf("%d ", 2-d) : printf("%d ", d-2);
	(e!=2) ? printf("%d ", 2-e) : printf("%d ", e-2);
	(f!=8) ? printf("%d ", 8-f) : printf("%d ", f-8);
	return 0;
}
